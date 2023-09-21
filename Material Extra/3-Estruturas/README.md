# Exemplos do uso de estruturas

## Exemplo 1: Definir e aceder a uma estrutura

Neste exemplo, estamos a usar C++ para criar uma estrutura chamada Pessoa. Esta estrutura tem dois membros: nome, que é uma string que representa o nome da pessoa, e idade, que é um inteiro que representa a idade da pessoa.

```cpp
#include <iostream>
#include <string>

using namespace std;

struct Pessoa {
    string nome;
    int idade;
};

int main() {
    Pessoa pessoa1; // Declara uma variável do tipo Pessoa

    // Atribui valores aos membros da estrutura
    pessoa1.nome = "Manuel Silva";
    pessoa1.idade = 30;

    // Acede e imprime aos membros da estrutura
    cout << "Nome: " << pessoa1.nome << endl;
    cout << "Idade: " << pessoa1.idade << endl;

    return 0;
}
```

Dentro da função ``main()``, declaramos uma variável chamada pessoa1 do tipo Pessoa. Em seguida, atribuímos valores aos membros da estrutura pessoa1. O nome é definido como "Manuel Silva" e a idade como 30.

Finalmente, utilizamos ``cout`` para imprimir o nome e a idade no ecrã. O resultado seria algo como:

```bash
Nome: Manuel Silva
Idade: 30
```

## Exemplo 2: Usar apontadores com estruturas

Neste exemplo, estamos a usar C++ para demonstrar como usar apontadores com estruturas. Temos uma estrutura chamada Ponto, que possui dois membros: x e y, representando as coordenadas de um ponto no plano cartesiano.

```cpp
#include <iostream>

using namespace std;

struct Ponto {
    int x;
    int y;
};

int main() {
    Ponto p1 = {5, 10};
    Ponto* ptr = &p1; // Apontador para uma estrutura Ponto

    cout << "Coordenadas: (" << p1.x << ", " << p1.y << ")\n";
    cout << "Coordenadas (atraves do apontador): (" << ptr->x << ", " << ptr->y << ")\n";

    return 0;
}
```

Dentro da função ``main()``, criamos uma variável ``p1`` do tipo Ponto e inicializamos os seus membros ``x`` e ``y`` com os valores 5 e 10, respetivamente.

Em seguida, criamos um ponteiro ptr que aponta para a estrutura ``p1``. O operador ``&`` é usado para obter o endereço de ``p1``.

Usamos cout para imprimir as coordenadas de ``p1`` e, em seguida, usamos o ponteiro ptr para aceder às coordenadas através do operador ``->``.

O resultado da execução seria algo como:

```bash
Coordenadas: (5, 10)
Coordenadas (atraves do apontador): (5, 10)
```

## Example 3: Estruturas com Arrays

Neste exemplo, estamos a usar C++ para demonstrar como trabalhar com estruturas que contêm arrays. A estrutura ``Aluno`` possui dois membros: nome, que é uma string representando o nome do aluno, e notas, que é um array de inteiros com tamanho 3, representando as notas do aluno em três disciplinas diferentes.

```cpp
#include <iostream>

using namespace std;

struct Student {
    std::string name;
    int scores[3];
};

int main() {
    Student student1 = {"Alice", {85, 90, 75}};

    std::cout << "Name: " << student1.name << std::endl;
    std::cout << "Scores: " << student1.scores[0] << ", " << student1.scores[1] << ", " << student1.scores[2] << std::endl;

    return 0;
}
```

Dentro da função ``main()``, criamos uma variável aluno1 do tipo ``Aluno`` e inicializamos os seus membros nome e notas. O nome é definido como "Alice" e as notas são {85, 90, 75}.

Em seguida, usamos cout para imprimir o nome e as notas do aluno. O resultado seria algo como:
```bash
Nome: Alice
Notas: 85, 90, 75
```

