// function-1-1.cpp
#include <iostream>
using namespace std;

// reads 10 ints, returns new[] array
int *readNumbers() {
    int *a = new int[10];
    for (int i = 0; i < 10; ++i) cin >> a[i];
    return a;
}

// prints "index value" one per line
void printNumbers(int *numbers, int length) {
    for (int i = 0; i < length; ++i) cout << i << ' ' << numbers[i] << '\n';
}
