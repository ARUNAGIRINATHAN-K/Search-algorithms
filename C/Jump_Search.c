int jumpSearch(int arr[], int n, int key) {
    int step = sqrt(n), prev = 0;
    while (arr[min(step, n)-1] < key) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < key)
        prev++;
    if (arr[prev] == key)
        return prev;
    return -1;
}