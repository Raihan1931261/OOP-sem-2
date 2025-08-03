#include <iostream>
using namespace std;

double array_mean(int array[], int n);

int main() {
    int arr[5] = {2, 4, 6, 8, 10};
    cout << "Mean: " << array_mean(arr, 5) << endl;
    return 0;
}
