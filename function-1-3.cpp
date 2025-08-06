#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int count[10] = {0};

    // Count digits
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int val = array[i][j];
            if (val >= 0 && val <= 9) {
                count[val]++;
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        cout << i << ":" << count[i];
        if (i < 9) cout << ";";
    }
    cout << endl;
}
