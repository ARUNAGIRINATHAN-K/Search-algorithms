def exponential_search(arr, key):
    if arr[0] == key:
        return 0
    n = len(arr)
    i = 1
    while i < n and arr[i] <= key:
        i *= 2
    return binary_search(arr[min(i, n-1):i//2-1:-1], key)
