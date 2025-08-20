// function-2-1.cpp
#include <iostream>
using namespace std;

int *readNumbers();            // reuse from 1-1 if you compile together

// print hex digit for each number (0..15), uppercase
void hexDigits(int *numbers, int length) {
    for (int i = 0; i < length; ++i) {
        char h;
        switch (numbers[i]) {
            case 0:  h='0'; break; case 1:  h='1'; break; case 2:  h='2'; break;
            case 3:  h='3'; break; case 4:  h='4'; break; case 5:  h='5'; break;
            case 6:  h='6'; break; case 7:  h='7'; break; case 8:  h='8'; break;
            case 9:  h='9'; break; case 10: h='A'; break; case 11: h='B'; break;
            case 12: h='C'; break; case 13: h='D'; break; case 14: h='E'; break;
            default: h='F'; // 15
        }
        cout << i << ' ' << h << '\n';
    }
}
