# Instruções
Escreva um programa em C++ que permita criar quadrados, obter informações e realizar operações com eles.

## Requisitos Funcionais
1. Criar um quadrado, inserindo as suas características (posição e comprimento do lado).
2. Calcular o perímetro e a área do quadrado.
3. Mover o quadrado.
4. Comparar dois quadrados e determinar qual é o maior.
5. Verificar se um determinado ponto está dentro do quadrado.

## Requisitos Não Funcionais
- Definir apenas uma classe, seguindo o paradigma de orientação a objetos.
- Utilizar uma estrutura para representar valores relacionados ao plano 2D.
- Implementar a interface com o utilizador exclusivamente na função `main`.

Note que, para a classe ser orientada a objetos, ela deve:
- ser responsável por todos os cálculos relacionados com quadrados inerentes às funcionalidades requeridas.
- respeitar a integridade dos objetos, ou seja, fazer pedidos em vez de dar ordens.

---

### 1. Primeiro passo: Criar a classe Square

O primeiro passo em definir uma classe é considerar os detalhes que a descrevem. Neste caso, um quadrado é tipicamente definido por coordenadas que representam o seu centro e o comprimento do lado. Para simplificar, vamos focar num plano bidimensional (2D).

```cpp
class Square {
    ...
};
```
Após definir os parâmetros que descrevem o quadrado, precisamos criar os métodos que implementam as funções desejadas. O primeiro a ser implementado é o construtor da classe:

```cpp
    Square(...) {
        ...
    }
```

### 2. Calcular o perímetro do quadrado
O perímetro de um quadrado é dado pela fórmula:

$$ P=4×side $$

Como o valor do comprimento do lado já faz parte da própria classe ``Sqare``, podemos usar esta variável da classe sem a necessidade de a passar como parâmetro para a função:
```cpp
    float perimeter(...){
       ...
    }
```

### 3. Calcular a área do quadrado
A área de um quadrado é dada pela fórmula:

$$ A=side*side* $$ 

Que se traduz na seguinte implementação:
```cpp
	float area(...) {
		...
	}
```

### 4. Mover o quadrado
Neste exercício, vamos assumir que mover o quadrado consiste em transladá-lo com base num dado deslocamento (tanto no eixo x como no eixo y).

Assim, a função terá dois parâmetros de entrada que correspondem ao deslocamento a ser adicionado às coordenadas do ponto de referência do quadrado:
```cpp
	void move(...) {
		...
	}
```
### 5. Comparar dois quadrados
Para comparar dois quadrados, podemos simplesmente comparar os comprimentos dos lados. Se um lado for maior que o outro, o quadrado com o lado maior é maior. A implementação desta função pode ser feita da seguinte forma:
```cpp
	float compareWith(...) {
		...
	}
```

### 6. Verificar se um ponto está dentro do quadrado
Para determinar se um ponto está dentro de um quadrado, devemos verificar se as coordenadas do ponto estão dentro dos limites do quadrado. Isso pode ser feito calculando metade do comprimento do lado e verificando se a diferença absoluta entre as coordenadas do ponto e o centro do quadrado é menor ou igual a metade do comprimento do lado:
```cpp
    bool containsPoint(...) {
            ...
        }
```

### 7. Implementação da interface com o utilizador

Primeiro, vamos começar por definir a lógica da interface. Uma possível solução passa por implementar a seguinte lógica:
1. É pedido ao utilizador que introduza as coordenadas de um vértice do quadrado (X, Y) e o comprimento do lado para criar um quadrado.
2. O programa calcula e imprime o perímetro e a área do quadrado criado.
3. O utilizador é solicitado a inserir valores de deslocamento (X, Y) para mover o quadrado.
4. São pedidas as coordenadas do centro (X, Y) e o comprimento do lado para criar um segundo quadrado.
5. O programa compara o primeiro quadrado com o segundo e imprime se o primeiro quadrado é maior ou menor que o segundo.
6. O utilizador é convidado a inserir as coordenadas de um ponto (X, Y).
7. O programa verifica se o ponto está dentro do quadrado e imprime o resultado.