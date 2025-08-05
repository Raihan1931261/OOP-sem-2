#include <iostream>
#include <string>
#include <bitset>
using namespace std;

// Convert binary string to decimal
int binaryToDecimal(string bin) {
    int result = 0;
    for(char c : bin) {
        result = result * 2 + (c - '0');
    }
    return result;
}

// Add two binary strings
string addBinary(string a, string b) {
    int n1 = binaryToDecimal(a);
    int n2 = binaryToDecimal(b);
    int sum = n1 + n2;
    return bitset<32>(sum).to_string().substr(32 - max(a.size(), b.size()) - 2);
}

// Shift right and left using decimal
string shiftRight(string a) {
    int num = binaryToDecimal(a);
    return bitset<32>(num >> 1).to_string().substr(32 - a.size());
}

string shiftLeft(string a) {
    int num = binaryToDecimal(a);
    return bitset<32>(num << 1).to_string().substr(32 - a.size() - 1);
}

int main() {
    string bin1 = "111011101011";
    string bin2 = "11";

    cout << "Addition: " << addBinary(bin1, bin2) << endl;
    cout << "Shift Right: " << shiftRight(bin1) << endl;
    cout << "Shift Left: " << shiftLeft(bin1) << endl;
    
    return 0;
}
