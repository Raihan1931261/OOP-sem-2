#include <iostream>
#include <string>
using namespace std;

string DecimalToBinary(int number) {
    string binary = "";
    if (number == 0) return "0";
    while (number > 0) {
        binary = to_string(number % 2) + binary;
        number /= 2;
    }
    return binary;
}

int main() {
    int number;
    cout << "Enter a decimal number: ";
    cin >> number;
    cout << "Binary: " << DecimalToBinary(number) << endl;
    return 0;
}
