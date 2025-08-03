bool is_fanarray(int array[], int n) {
    if (n < 1) return false;
    for (int i = 0; i < n; i++) {
        if (array[i] != array[n - 1 - i]) return false;
        if (i > 0 && array[i] < array[i - 1] && i <= n / 2) return false;
    }
    return true;
}
