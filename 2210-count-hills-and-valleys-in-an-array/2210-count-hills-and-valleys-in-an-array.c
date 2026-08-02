int countHillValley(int* nums, int numsSize) {
    int count = 0;
    int j = 0;
    for (int i = 1; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1])
            continue;
        if ((nums[i] > nums[j] && nums[i] > nums[i + 1]) ||
            (nums[i] < nums[j] && nums[i] < nums[i + 1])) {
            count++;
        }
        j = i;
    }
    return count;
}