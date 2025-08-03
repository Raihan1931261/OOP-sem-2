#include <iostream>
using namespace std;

double sum_even(double array[], int n);

int main() {
    double arr[6] = {1.5, 2.2, 3.3, 4.4, 5.5, 6.6};
    cout << "Sum of even positions: " << sum_even(arr, 6) << endl;
    return 0;
}
