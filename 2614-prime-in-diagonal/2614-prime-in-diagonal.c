int isPrime(int n)
{
    if (n < 2)
        return 0;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int diagonalPrime(int** nums, int numsSize, int* numsColSize)
{
    int maxPrime = 0;

    for (int i = 0; i < numsSize; i++)
    {
        if (isPrime(nums[i][i]) && nums[i][i] > maxPrime)
            maxPrime = nums[i][i];

        if (isPrime(nums[i][numsSize - 1 - i]) &&
            nums[i][numsSize - 1 - i] > maxPrime)
            maxPrime = nums[i][numsSize - 1 - i];
    }

    return maxPrime;
}