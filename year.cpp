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
