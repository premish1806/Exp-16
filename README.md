# Exp-16 Exception Handling

## Aim:
The aim of this assignment is to learn how to handle errors in C++ using try, throw, and catch to manage incorrect inputs like negative numbers and years less than 2000.

## Software Used:
- Dev c++
  
## Theory:
In C++, exception handling allows us to manage errors effectively using try, throw, and catch. When an error condition is met in the try block, the throw statement raises an exception, and the catch block handles it by providing an appropriate response. This approach improves the program's robustness and helps it run smoothly even when users provide incorrect input.

## Program 1: : Prompt the user to enter a positive number. If user enters positive number, display that number. If user enters negative number throw an exception.

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;

int main() {
    float a;
    cout << "Enter a positive number: ";
    cin >> a;

    try {
        if (a < 0) {
            throw a;
        } else {
            cout << "The number is: " << a << endl;
        }
    } catch (const float n) {
        cout << "You entered " << a << " which is a negative number: " << n << endl;
    }
    return 0;
}

```
<strong> Output: </strong>
<br>


## Program 2: Prompt the user to enter a year greater than 2000. If user enters year greater than 2000, then display that year. If user enters year less than 2000 throw an exception.

<strong> Code: </strong>
<br>
```cpp
// Premish Ninawe
// 23070123092
// ENTC B1
#include<iostream>
using namespace std;

int main() {
    int year;
    cout << "Enter year greater than 2000: ";
    cin >> year;

    try {
        if (year < 2000) {
            throw "You entered a year less than 2000";
        } else {
            cout << "Entered year is: " << year << endl;
        }
    } catch (const char* msg) {
        cout << msg << endl;
    }
    return 0;
}

```
<strong> Output: </strong>
<br>

## Conclusion:
we learned how to handle errors in C++ using exception handling to deal with incorrect inputs and make the program more user-friendly.
