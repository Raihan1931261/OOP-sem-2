// main-4-1.cpp
#include <iostream>
using namespace std;

int *readNumbers();
int secondSmallestSum(int *numbers, int length);

int main() {
    int *a = readNumbers();                 // 10 ints
    cout << secondSmallestSum(a, 10) << '\n';
    delete[] a;
    return 0;
}
