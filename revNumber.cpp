#include <iostream>
using namespace std;

int main() {
    int num, reversed = 0;

    cout << "Enter a three-digit number: ";
    cin >> num;

    int hundreds = num / 100;
    int tens = (num / 10) % 10;
    int units = num % 10;

    reversed = units * 100 + tens * 10 + hundreds;

    cout << "Reversed number: " << reversed << endl;

    return 0;
}
