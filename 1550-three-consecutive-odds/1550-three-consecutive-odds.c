bool threeConsecutiveOdds(int* arr, int arrSize) {
    int j, k;

    for (int i = 0; i < arrSize - 2; i++) {
        j = i + 1;
        k = i + 2;
        if (arr[i] % 2 == 1 && arr[j] % 2 == 1 && arr[k] % 2 == 1) {
            return true;
        }
    }

    return false;
}