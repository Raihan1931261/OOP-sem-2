#include <iostream>
using namespace std;

int num_count(int array[], int n, int number);

int main() {
    int arr[6] = {1, 2, 3, 2, 4, 2};
    cout << "Count of 2: " << num_count(arr, 6, 2) << endl;
    return 0;
}
