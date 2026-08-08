int minOperations(int* nums, int numsSize)
{
    int freq[1000001] = {0};
    int ans = 0;

    for (int i = 0; i < numsSize; i++)
        freq[nums[i]]++;

    for (int i = 1; i <= 1000000; i++)
    {
        if (freq[i] == 0)
            continue;

        if (freq[i] == 1)
            return -1;

        ans += freq[i] / 3;

        if (freq[i] % 3 != 0)
            ans++;
    }

    return ans;
}