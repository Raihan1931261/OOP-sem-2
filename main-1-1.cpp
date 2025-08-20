// main-1-1.cpp
#include <iostream>
using namespace std;

// from function-1-1.cpp
int *readNumbers();
void printNumbers(int *numbers, int length);

int main() {
    int *arr = readNumbers();           // expects 10 ints from stdin
    printNumbers(arr, 10);
    delete[] arr;
    return 0;
}
