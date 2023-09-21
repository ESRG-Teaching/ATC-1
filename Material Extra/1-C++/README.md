# C++ Cheat Sheet

## Basic Syntax and Concepts

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Code goes here
    return 0;
}

Single-line comment: 
// code comment

Multi-line comment: 
/*
    code comment 1
    code comment 2
    code comment 3
*/
```

## Variable Declaration
```cpp
int x;
double pi = 3.14;
char grade = 'A';
string name = "John"; // Requires <string> header
```

## Namespaces
```cpp
namespace myNamespace {
    int x;
}
// Usage: myNamespace::x
```

## Preprocessor Directives
```cpp
#define PI 3.14
// Usage: double circumference = 2 * PI * radius;
```

## Input/Output
```cpp
cout << "Hello, World!" << endl; // Output
cin >> x; // Input
```

## Control Structures
### if-else statement
```cpp
if (condition) {
    // code if condition is true
} else if (another_condition) {
    // code if another_condition is true
} else {
    // code if all conditions are false
}
```
### switch statement
```cpp
switch (variable) {
    case value1:
        // code for value1
        break;
    case value2:
        // code for value2
        break;
    default:
        // default code
}
```
### Loops
```cpp
for (int i = 0; i < 5; i++) {
    // code executed in each iteration
}

while (condition) {
    // code executed as long as condition is true
}

do {
    // code executed at least once, then repeats as long as condition is true
} while (condition);eturn_type function_name(parameter_type parameter_name) {
    // function body
    return value; // return statement
}

// Example function
int add(int a, int b) {
    return a + b;
}
```

## Arrays and Pointers
```cpp
int arr[5]; // Array of 5 integers

arr[0] = 10; // Assigning value to first element
int x = arr[2]; // Accessing third element

int* ptr; // Pointer to an integer
ptr = &x; // Point ptr to the address of x
int y = *ptr; // Dereferencing pointer
```

## Classes and Objects
```cpp
class MyClass {
public:
    int myVariable; // Member variable
    void myMethod() { // Member function
        // code
    }
};

int main() {
    MyClass obj; // Creating an object of MyClass
    obj.myVariable = 42; // Accessing member variable
    obj.myMethod(); // Calling member function
    return 0;
}
```

## Dynamic Memory Allocation
```cpp
int* ptr = new int; // Allocate memory for an integer
*ptr = 42; // Assign a value
delete ptr; // Free the memory
```

## Inheritance and Polymorphism
```cpp
class DerivedClass : public BaseClass {
public:
    void myMethod() override { // Override a method
        // code
    }
};

BaseClass* ptr = new DerivedClass; // Polymorphism
```

## Exception Handling
```cpp
try {
    // code that may throw an exception
    if (condition) {
        throw MyException("Something went wrong");
    }
} catch (MyException& e) {
    cout << "Exception caught: " << e.what() << endl;
}

```

## Standard Template Library (STL)
```cpp
#include <vector>
#include <map>
#include <set>

vector<int> vec = {1, 2, 3}; // Vector
map<string, int> myMap; // Map
set<int> mySet; // Set
```

## File I/O
```cpp
#include <fstream>

ifstream inFile("input.txt"); // Open for reading
ofstream outFile("output.txt"); // Open for writing

// Use inFile and outFile like cin and cout

inFile.close(); // Close file
outFile.close(); // Close file
```