#include <iostream>
using namespace std;

double weighted_average(int array[], int n);

int main() {
    int arr[6] = {1, 2, 1, 4, 1, 3};
    cout << "Weighted Average: " << weighted_average(arr, 6) << endl;
    return 0;
}
