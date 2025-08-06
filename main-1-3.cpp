#include <iostream>

void count_digits(int array[4][4]);

int main() {
    int test[4][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1}
    };
    
    count_digits(test);
    return 0;
}
