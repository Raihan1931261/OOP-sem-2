#include <iostream>
using namespace std;

bool is_ascending(int array[], int n);

int main() {
    int arr[5] = {1, 2, 2, 4, 5};
    cout << (is_ascending(arr, 5) ? "Ascending" : "Not ascending") << endl;
    return 0;
}
