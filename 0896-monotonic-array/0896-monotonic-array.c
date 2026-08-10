bool isMonotonic(int* nums, int numsSize)
{
    int increasing = 1;
    int decreasing = 1;

    for (int i = 1; i < numsSize; i++)
    {
        if (nums[i] > nums[i - 1])
            decreasing = 0;

        if (nums[i] < nums[i - 1])
            increasing = 0;
    }

    return increasing || decreasing;
}