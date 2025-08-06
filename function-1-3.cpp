#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int count[10] = {0};

    // Count digits
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int val = array[i]
