#include <iostream>
using namespace std;

bool is_palindrome(int integers[], int length);
int sum_array_elements(int integers[], int length);
int sum_if_palindrome(int integers[], int length);

int main() {
    int arr1[5] = {1, 2, 3, 2, 1};
    int arr2[4] = {1, 2, 3, 4};

    cout << "Sum if palindrome (arr1): " << sum_if_palindrome(arr1, 5) << endl;
    cout << "Sum if palindrome (arr2): " << sum_if_palindrome(arr2, 4) << endl;
    return 0;
}
