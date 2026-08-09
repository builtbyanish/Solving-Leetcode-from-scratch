int countSymmetricIntegers(int low, int high) {
    int count = 0;

    for (int n = low; n <= high; n++) {
        int temp = n;
        int digits = 0;

        while (temp > 0) {
            digits++;
            temp /= 10;
        }
        if (digits % 2 != 0)
            continue;

        int half = digits / 2;
        int sum1 = 0, sum2 = 0;

        temp = n;
        for (int i = 0; i < half; i++) {
            sum2 += temp % 10;
            temp /= 10;
        }
        for (int i = 0; i < half; i++) {
            sum1 += temp % 10;
            temp /= 10;
        }

        if (sum1 == sum2)
            count++;
    }

    return count;
}