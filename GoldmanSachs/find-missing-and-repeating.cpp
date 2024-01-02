vector<int> findTwoElement(vector<int> arr, int n) {
    vector<int> result(2);
    vector<int> count(n + 1, 0); // Initialize count array

    int duplicate = -1, missing = -1;

    // Populate count array with frequencies
    for (int i = 0; i < n; ++i)
        count[arr[i]]++;

    // Find duplicate and missing number from count array
    for (int i = 1; i <= n; ++i) {
        if (count[i] == 0) // Missing number
            missing = i;
        else if (count[i] == 2) // Duplicate number
            duplicate = i;
    }

    result[0] = duplicate;
    result[1] = missing;
    return result;
}
