#include <iostream>
using namespace std;

bool is_fanarray(int array[], int n);

int main() {
    int arr1[5] = {1, 2, 3, 2, 1};
    int arr2[5] = {1, 2, 1, 2, 1};
    cout << (is_fanarray(arr1, 5) ? "Fan array" : "Not fan array") << endl;
    cout << (is_fanarray(arr2, 5) ? "Fan array" : "Not fan array") << endl;
    return 0;
}
