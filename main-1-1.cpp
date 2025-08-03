#include <iostream>
using namespace std;

int array_sum(int array[], int n);

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Sum: " << array_sum(arr, 5) << endl;
    return 0;
}
