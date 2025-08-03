#include <iostream>
using namespace std;

int median_array(int array[], int n);

int main() {
    int arr[5] = {3, 5, 2, 1, 4};
    cout << "Median: " << median_array(arr, 5) << endl;
    return 0;
}
