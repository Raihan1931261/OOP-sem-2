// main-3-2.cpp
#include <iostream>
using namespace std;

int *readNumbers();
int *reverseArray(int *numbers, int length);
bool equalsArray(int *numbers1, int *numbers2, int length);

int main() {
    int *a = readNumbers();              // 10 ints
    int *b = reverseArray(a, 10);        // reversed copy
    cout << (equalsArray(a, b, 10) ? "true" : "false") << '\n';
    delete[] a;
    delete[] b;
    return 0;
}
