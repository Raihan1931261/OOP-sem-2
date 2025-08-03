#include <iostream>
using namespace std;

int max_element(int array[], int n);

int main() {
    int arr[5] = {7, 3, 9, 2, 5};
    cout << "Maximum element: " << max_element(arr, 5) << endl;
    return 0;
}
