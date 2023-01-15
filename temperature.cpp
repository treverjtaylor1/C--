#include <iostream>
using namespace std;

int main() {
    cout << "Enter temperature in fahrenheit and I'll convert it to celsius: ";
    int fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << celsius;
    return 0;
} 