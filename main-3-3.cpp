#include <iostream>
using namespace std;

double weighted_average(int array[], int n);

int main() {
    // Test case 1: {1,2,1,4,1,3} - should return 3.0
    int arr1[] = {1, 2, 1, 4, 1, 3};
    cout << "Test 1: {1,2,1,4,1,3} - Weighted Average: " << weighted_average(arr1, 6) << endl;
    
    // Test case 2: {5,5,5} - should return 5.0
    int arr2[] = {5, 5, 5};
    cout << "Test 2: {5,5,5} - Weighted Average: " << weighted_average(arr2, 3) << endl;
    
    // Test case 3: {1,2,3,4,5} - should return 3.0 (all frequencies are 1)
    int arr3[] = {1, 2, 3, 4, 5};
    cout << "Test 3: {1,2,3,4,5} - Weighted Average: " << weighted_average(arr3, 5) << endl;
    
    // Test case 4: {2,2,3,3,3} - should return 2.6
    int arr4[] = {2, 2, 3, 3, 3};
    cout << "Test 4: {2,2,3,3,3} - Weighted Average: " << weighted_average(arr4, 5) << endl;
    
    // Test case 5: Empty array - should return 0
    cout << "Test 5: Empty array - Weighted Average: " << weighted_average(arr1, 0) << endl;
    
    return 0;
}
