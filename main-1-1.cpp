#include <iostream>
using namespace std;

int sum_diagonal(int array[4][4]);

int main() {
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 1, 2, 3},
        {4, 5, 6, 7}
    };

    cout << "Sum of diagonal: " << sum_diagonal(matrix) << endl;
    return 0;
}
