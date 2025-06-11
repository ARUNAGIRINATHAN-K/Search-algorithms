int exponentialSearch(int arr[], int n, int key) {
    if (arr[0] == key)
        return 0;
    int i = 1;
    while (i < n && arr[i] <= key)
        i *= 2;
    return binarySearch(arr, i/2, min(i, n-1), key);
}