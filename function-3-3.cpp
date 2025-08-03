#include <iostream>
#include <map>
using namespace std;

double weighted_average(int array[], int n) {
    // Return 0 if size is less than 1
    if (n < 1) {
        return 0.0;
    }
    
    // Count frequency of each element
    map<int, int> frequency;
    for (int i = 0; i < n; i++) {
        frequency[array[i]]++;
    }
    
    // Calculate weighted average
    double weighted_sum = 0.0;
    for (map<int, int>::iterator it = frequency.begin(); it != frequency.end(); ++it) {
        int element = it->first;
        int freq = it->second;
        weighted_sum += element * (double(freq) / n);
    }
    
    return weighted_sum;
}
