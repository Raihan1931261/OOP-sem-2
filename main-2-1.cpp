#include <iostream>
using namespace std;

int min_element(int array[], int n);

int main() {
    int arr[5] = {7, 3, 9, 2, 5};
    cout << "Minimum element: " << min_element(arr, 5) << endl;
    return 0;
}
