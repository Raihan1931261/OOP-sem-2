// function-4-1.cpp
#include <iostream>
#include <climits>
using namespace std;

// returns the second smallest subarray sum (contiguous). duplicates allowed.
int secondSmallestSum(int *numbers, int length) {
    if (length <= 1) return 0; // or handle as you want; spec says length > 1

    // prefix sums to get O(n^2) sums easily
    long long *pref = new long long[length + 1];
    pref[0] = 0;
    for (int i = 0; i < length; ++i) pref[i + 1] = pref[i] + numbers[i];

    long long best1 = LLONG_MAX, best2 = LLONG_MAX;
    for (int i = 0; i < length; ++i) {
        for (int j = i; j < length; ++j) {
            long long s = pref[j + 1] - pref[i];
            if (s < best1) { best2 = best1; best1 = s; }
            else if (s <= best2) { best2 = s; } // allows equal to be "second smallest"
        }
    }
    delete[] pref;
    return (int)best2;
}
