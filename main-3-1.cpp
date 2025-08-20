// main-3-1.cpp
#include <iostream>
using namespace std;

int *readNumbers();
bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    int *a = readNumbers();   // 10 ints
    int *b = readNumbers();   // another 10 ints
    cout << (equalsArray(a, b, 10) ? "true" : "false") << '\n';
    delete[] a;
    delete[] b;
    return 0;
}
