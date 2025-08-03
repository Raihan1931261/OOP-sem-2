int min_element(int array[], int n) {
    if (n < 1) return 0;
    int minVal = array[0];
    for (int i = 1; i < n; i++) {
        if (array[i] < minVal) minVal = array[i];
    }
    return minVal;
}
