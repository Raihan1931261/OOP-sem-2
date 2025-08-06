#include <iostream>
using namespace std;

int binary_to_int(int binary_digits[], int number_of_digits);

int main() {
    int binary[5] = {1, 0, 1, 1, 0};  // 10110 in binary
    cout << "Integer value: " << binary_to_int(binary, 5) << endl;
    return 0;
}
