// main-2-1.cpp
#include <iostream>
using namespace std;

int *readNumbers();
void hexDigits(int *numbers, int length);

int main() {
    int *arr = readNumbers();   // read 10 ints in range 0..15
    hexDigits(arr, 10);
    delete[] arr;
    return 0;
}
