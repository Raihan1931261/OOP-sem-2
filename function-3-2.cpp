// function-3-2.cpp
#include <iostream>
using namespace std;

int *reverseArray(int *numbers, int length) {
    int *r = new int[length];
    for (int i = 0; i < length; ++i) r[i] = numbers[length - 1 - i];
    return r;
}
