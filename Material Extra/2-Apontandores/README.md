# Exemplos do uso de apontadores


## Exemplo 1: Alocação dinâmica de memória
Neste exemplo, estamos a usar C++ para demonstrar a alocação dinâmica de memória. Um apontador ``ptr`` é criado usando o operador new para alocar espaço para um inteiro na memória. Se a alocação for bem-sucedida, o valor 42 é atribuído à memória alocada e depois impresso na tela. Finalmente, a memória é libertada com ``delete``.

```cpp
#include <iostream>

using namespace std;

int main() {
    int* ptr = new int; // Aloca memória para um inteiro

    if (ptr == nullptr) {
        cout << "Falha na alocação de memória." << endl;
        return 1;
    }

    *ptr = 42; // Atribui um valor à memória alocada

    cout << "Valor em ptr: " << *ptr << endl;

    delete ptr; // Liberta a memória alocada

    return 0;
}
```

## Exemplo 2: Arrays e apontadores

Neste exemplo, criamos um array arr de tamanho 5 e um apontador ptr que aponta para o primeiro elemento do array. Em seguida, usamos um loop para percorrer o array usando aritmética de apontadors e imprimir os valores.

```cpp
#include <iostream>

using namespace std;

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int* ptr = arr; // O apontador aponta para o primeiro elemento do array

    for (int i = 0; i < 5; i++) {
        cout << "Valor no índice " << i << ": " << *(ptr + i) << endl; // Acede aos elementos usando aritmética de apontadors
    }

    return 0;
}
```

## Exemplo 3: Apontadores para funções

Neste exemplo, estamos a demonstrar o uso de apontadores para funções em C++. Declaramos um apontador ptr para uma função que recebe dois inteiros e retorna um inteiro. Em seguida, apontamos ``ptr`` para diferentes funções (somar e subtrair) e chamamos as funções usando o apontador.

```cpp
#include <iostream>

using namespace std;

int somar(int a, int b) {
    return a + b;
}

int subtrair(int a, int b) {
    return a - b;
}

int main() {
    int (*ptr)(int, int); // Declara um apontador para uma função que recebe dois inteiros e retorna um inteiro

    ptr = somar; // Aponta para a função somar
    cout << "Adição: " << ptr(3, 2) << endl; // Chama a função somar usando o apontador

    ptr = subtrair; // Aponta para a função subtrair
    cout << "Subtração: " << ptr(3, 2) << endl; // Chama a função subtrair usando o apontador

    return 0;
}
```