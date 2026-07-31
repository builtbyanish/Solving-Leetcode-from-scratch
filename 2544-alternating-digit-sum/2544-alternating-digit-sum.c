int alternateDigitSum(int n) {
    int sum = 0;
    int sign = 1;

    while (n > 0) {
        sum += (n % 10) * sign;
        sign = -sign;
        n /= 10;
    }

    return sign == 1 ? -sum : sum;
}