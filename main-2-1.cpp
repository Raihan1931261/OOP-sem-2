#include <iostream>
#include <string>
using namespace std;

void print_binary_str(string decimal_number);

int main() {
    string num;
    cout << "Enter a decimal number: ";
    cin >> num;
    print_binary_str(num);
    return 0;
}
