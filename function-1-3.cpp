#include <iostream>

void count_digits(int array[4][4]) {
    int count[10] = {0}; // Array to store count of each digit 0-9
    
    // Count occurrences of each digit
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (array[i][j] >= 0 && array[i][j] <= 9) {
                count[array[i][j]]++;
            }
        }
    }
    
    // Print results
    std::cout << "0:" << count[0] << ";1:" << count[1] << ";2:" << count[2] << ";3:" << count[3]
              << ";4:" << count[4] << ";5:" << count[5] << ";6:" << count[6] << ";7:" << count[7]
              << ";8:" << count[8] << ";9:" << count[9] << ";";
}
