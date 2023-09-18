# Enunciado
Escreva um programa C++ que permite criar círculos, obter informações e realizar operações sobre eles.

## Requisitos funcionais
1. Criar um círculo, inserindo as suas características (dimensão e localização no plano)
2. Calcular o perímetro e a área da superfície do círculo
3. Deslocar e ampliar/reduzir o círculo.
4. Calcular a distância entre as periferias de dois círculos.

## Requisitos não funcionais
- Defina apenas uma classe e que esta siga o paradigma da orientação-aos-objectos.
- Utilize uma estrutura para representar valores relativos às 2 dimensões do plano
- Implemente a interface com o utilizador exclusivamente na função main.

Note que, para a classe ser orientada-aos-objectos ela tem que:
- ser responsável por todos os cálculos relacionados com círculos inerentes às funcionalidades requeridas
- respeitar a integridade dos objectos, ou seja, fazer pedidos em vez de dar ordens

---

### 1. Primeiro passo: criar a classe circulo

O primeiro passo para definir uma classe é considerar os detalhes que a descrevem. No caso, um círculo é tipicamente definido por uma coordenada que representa o centro do círculo e o raio. Por simplicidade, vamos concentrar-nos num plano bidimensional (2D).

```cpp
class Circle {
    float x;
    float y;
    float radius;
};
```

Embora esta abordagem seja correta e funcional, é uma boa prática criar camadas de abstração que simplifiquem futuras alterações no código. Por exemplo, podemos criar uma estrutura de dados que nos permita descrever o centro do círculo:

```cpp
struct FloatXY {
    float x; 
    float y;
};

class Circle {
    FloatXY centre;
    float radius;
};
```


Após a definição dos parâmetros que descrevem o círculo, é necessário criar os métodos que implementam as funções pretendidas. A primeira função a ser implementada é o construtor da classe circulo:
```cpp
    Circle(const FloatXY* centre, float radius) {
        this->centre = *centre;
        this->radius = radius;
    }
```

---

### 2. Calcular o perimetro do circulo
O perimetro do circulo é dado pela seguinte fórmula:
$$ C = 2 \pi r $$

No entanto, o valor do raio do círculo já faz parte da própria classe ``Circle``. Assim, podemos usar esta variável da classe sem a necessidade de a passar como parâmetro da função:

```cpp
    float perimeter(float radius){
        return (float)(2 * PI * radius);
    }
```

Contudo, o valor do raio do circulo já faz parte da própria classe ``Circle``. Assim, podemos usar esta variavel da classe, sem a necessidade de a passar como parâmetro da função:

```cpp
    float perimeter(){
        return (float)(2 * PI * radius);
    }
```

Para o valor de PI, a forma mais simples passa por utilizar a biblioteca cmath:
```cpp
#include <cmath>
const double PI = acos(-1);
```

---

### 3. Calcular a área da superfície do círculo

A área do circulo é dado pela seguinte fórmula:
$$ A = \pi r^2\ $$

Desta forma, a implementação desta função pode ser feita da seguinte forma:
```cpp
    float area(){
        return (float)(PI * pow(radius, 2));
    }
```
Onde ``pow`` corresponde à função da biblioteca cmath e segue a seguinte sintaxe:
```cpp
pow(float base, float exponent)
```
---

### 4. Deslocar o circulo

Existem diversas maneiras de alterar a posição do círculo. Por exemplo, seria efetivo alterar apenas as coordenadas (x, y) que descrevem o centro do círculo. Contudo, neste exercício vamos assumir que o deslocamento do círculo consiste na translação do círculo com base num dado deslocamento (quer no eixo x como no eixo y).

Desta forma, a função terá como parâmetro de entrada uma estrutura ``FloatXY`` que corresponde ao deslocamento que irá ser somado ao centro do círculo:

```cpp
	FloatXY move(FloatXY displacement) {
		centre.x += displacement.x;
		centre.y += displacement.y;
		return centre;
	}
```
---

### 5. Ampliar/reduzir o circulo

Para aumentar/reduzir o tamanho de um círculo é preciso alterar o tamanho do seu raio. E para isso, é necessário um fator de aumento/redução. Assim sendo, a implementação de uma função que altere o tamanho de um círculo deve receber como parâmetro de entrada esse mesmo fator, o qual será utilizado para escalar o raio do círculo.

```cpp
	float resize(float zoom) {
		float new_radius = radius * zoom;
		if (new_radius > 0) {
			radius = new_radius;
			return radius;
		}
		return 0;
	}
```

---

### 6. Calcular a distância entre as periferias de dois círculos

O cálculo da distância entre dois círculos corresponde ao cálculo da distância entre o centro desses mesmos dois círculos:

$$ \sqrt{{\text{{dx}}^2 + \text{{dy}}^2}} $$

Assim, é necessário um segundo circulo de referência para que possa ser calculada a distância (uma vez que os dados do próprio círculo já estão disponíveis através dos membros da própria classe).

```cpp
	float distanceTo(const Circle* c) {
		float dx = centre.x - c->centre.x;
		float dy = centre.y - c->centre.y;
		float centersDistance = (float)sqrt(pow(dx, 2) + pow(dy, 2));
		return abs(centersDistance - radius - c->radius);
	}
```

--- 

### 7. Implementação da interface com o utilizador

Primeiro, vamos começar por definir a lógica da interface. Uma possível solução passa por implementar a seguinte lógica:
1. Definir uma struct do tipo ``FloatXY`` e uma variável do tipo float que descrevem um circulo;
2. Permitir que o utilizador providencie os dados que definem o circulo (através da consola, utilizando a função ``cin``).
3. Criar um objeto do tipo ``Circle`` e de seguida calcular (e imprimir) os valores do perímetro e àrea do círculo criado;
4. Aplicar uma translação ao circulo (usar função move definida anteriormente);
5. Aumentar/Reduzir o tamanho do circulo criado;
6. Adicionar um novo circulo e calcular a distância entre este e o primeiro circulo;
