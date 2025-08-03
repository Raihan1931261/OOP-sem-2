#include <iostream>
using namespace std;

int sum_two_arrays(int array1[], int array2[], int n);

int main() {
    int arr1[3] = {1, 2, 3};
    int arr2[3] = {4, 5, 6};
    cout << "Sum of two arrays: " << sum_two_arrays(arr1, arr2, 3) << endl;
    return 0;
}
