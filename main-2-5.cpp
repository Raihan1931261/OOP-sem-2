#include <iostream>
using namespace std;

bool is_descending(int array[], int n);

int main() {
    int arr[5] = {9, 7, 7, 4, 1};
    cout << (is_descending(arr, 5) ? "Descending" : "Not descending") << endl;
    return 0;
}
