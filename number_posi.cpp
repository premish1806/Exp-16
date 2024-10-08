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

