#include <iostream>
using namespace std;

int array_min(int integers[], int length);
int array_max(int integers[], int length);
int sum_min_max(int integers[], int length);

int main() {
    int arr[6] = {3, 7, 1, 9, 2, 5};
    cout << "Sum of min and max: " << sum_min_max(arr, 6) << endl;
    return 0;
}
