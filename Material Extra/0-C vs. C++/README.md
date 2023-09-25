
# Principais diferenças entre C e C++

| Feature                     |                   C                    |                          C++                          |
| :-------------------------- | :------------------------------------: | :---------------------------------------------------: |
| **Programming Paradigm**    |         Procedural programming         | Multi-paradigm (Procedural, Object-Oriented, Generic) |
| **Function Overloading**    |                  :x:                   |                  :white_check_mark:                   |
| **Operator Overloading**    |                  :x:                   |                  :white_check_mark:                   |
| **Classes and Objects**     |                  :x:                   |                  :white_check_mark:                   |
| **Inheritance**             |                  :x:                   |                  :white_check_mark:                   |
| **Polymorphism**            |                  :x:                   |    :white_check_mark: (Through Virtual Functions)     |
| **Encapsulation**           |                  :x:                   |                  :white_check_mark:                   |
| **Abstraction**             |                  :x:                   |                  :white_check_mark:                   |
| **Templates**               |                  :x:                   |                  :white_check_mark:                   |
| **Namespaces**              |                  :x:                   |                  :white_check_mark:                   |
| **Header Files**            |  Use `.h` extension (e.g., `stdio.h`)  |          Use `.h` extension (e.g., `cstdio`)          |
| **Standard I/O**            |         `printf()`, `scanf()`          |             `cout`, `cin`, `cerr`, `clog`             |
| **Memory Management**       |         Manual (malloc, free)          |                 Manual (new, delete)                  |
| **Error Handling**          | Primarily via return values and errno  |        Exception Handling (try, catch, throw)         |
| **Preprocessor Directives** |            Extensively used            |               Used, but less frequently               |
| **Type Casting**            |      Traditional C-style casting       |        Additional C++-style casting operators         |
| **C Standard Library**      | Standard C Library (e.g., `<stdio.h>`) |         C Standard Library (e.g., `<cstdio>`)         |
| **C++ Standard Library**    | Limited (C++-style headers available)  |       Extensive Standard Template Library (STL)       |
| **File I/O**                |      `fopen()`, `fclose()`, etc.       |      `std::fstream` classes and stream operators      |
| **Friend Functions**        |                  :x:                   |                  :white_check_mark:                   |
| **Default Arguments**       |                  :x:                   |      :white_check_mark: in function declarations      |
| **Function Prototypes**     |                Optional                |                       Mandatory                       |
| **Forward Declarations**    |       Must be used for functions       |             Can also be used for classes              |

# Principais diferenças entre C e C++ (Código)

## 1. Header Files:
C:
```c
#include <stdio.h>
```
C++:
```cpp
#include <iostream>
using namespace std;
```

## 2. I/O Streams:
C:
```c
printf("Hello, World!\n");
scanf("%d", &num);
```

C++:
```cpp
cout << "Hello, World!" << endl;
cin >> num;
```


## 3. Functions:
C:
```c
int add(int a, int b) {
    return a + b;
}
```

C++:
```cpp
int add(int a, int b) {
    return a + b;
}
```

## 4. Variable Declaration:
C:
```c
int num;
```

C++:
```cpp
int num;
```

### 5. Pointers:
C:
```c
int *ptr;
```

C++:
```cpp
int* ptr; // or int *ptr; (Both are valid)
```

## 6. Structs
C:
```c
struct Point {
    int x;
    int y;
};

// Declaration and initialization
struct Point p1 = {2, 3};

// Accessing struct members
p1.x = 5;
p1.y = 7;
```

C++:
```cpp
struct Point {
    int x;
    int y;
};

// Declaration and initialization
Point p1 = {2, 3};

// Accessing struct members
p1.x = 5;
p1.y = 7;
```


Em C++, também é possível omitir a keyword ``struct`` ao declarar variáveis do tipo ``struct``:

```cpp
Point p2 = {4, 6};
```

Além disso, em C++, é possível adicionar funções membros (métodos) a uma estrutura, tornando-a semelhante a uma classe:

```cpp
struct Point {
    int x;
    int y;

    void setPoint(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }
};
```


## 7. Dynamic Memory Allocation:
C:
```c
int* ptr = (int*)malloc(sizeof(int));
```

C++:
```cpp
int* ptr = new int;
```

## 8. Classes and Objects:
C (Sem Classes):
```c
// Not applicable
```

C++ (Com Classes):
```cpp
class MyClass {
    int x;
public:
    void setX(int val) {
        x = val;
    }
};
```

## 9. Function Overloading:
C:
```c
// Not supported
```

C++:
```cpp
int add(int a, int b) {
    return a + b;
}

float add(float a, float b) {
    return a + b;
}
```

## 10. Operator Overloading:
C:
```c
// Not supported
```

C++:
```cpp
class Complex {
    int real, imag;
public:
    Complex operator+(Complex const &obj) {
        Complex result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;
        return result;
    }
};
```

## 11. Inheritance:
C:
```c
// Not supported
```

C++:
```cpp
class ChildClass : public ParentClass {
    // ...
};
```

## 12. Polymorphism:
C:
```c
// Not supported
```

C++:
```cpp
class Base {
public:
    virtual void display() {
        cout << "Display from Base" << endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        cout << "Display from Derived" << endl;
    }
};
```

## 13. Exceptions:
C:
```c
// Not supported
```

C++:
```cpp
try {
    // code that might throw an exception
}
catch (ExceptionType e) {
    // code to handle the exception
}
```

## 14. Namespaces:
C:
```c
// Not supported
```

C++:
```cpp
namespace myNamespace {
    int x;
}
```

## 15. Standard Template Library (STL):
C:
```c
// Not available
```

C++:
```cpp
#include <vector>
#include <string>
#include <algorithm>

std::vector<int> numbers = {1, 2, 3, 4, 5};
std::string str = "Hello, World!";
std::sort(numbers.begin(), numbers.end());
```