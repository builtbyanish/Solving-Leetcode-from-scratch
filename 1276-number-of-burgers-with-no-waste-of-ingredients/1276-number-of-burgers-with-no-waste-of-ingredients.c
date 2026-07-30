/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* numOfBurgers(int tomatoSlices, int cheeseSlices, int* returnSize) {
    int jumbo = (tomatoSlices - 2 * cheeseSlices) / 2;
    int small = cheeseSlices - jumbo;

    if (tomatoSlices % 2 != 0 || jumbo < 0 || small < 0) {
        *returnSize = 0;
        return NULL;
    }

    int *ans = (int *)malloc(2 * sizeof(int));
    ans[0] = jumbo;
    ans[1] = small;

    *returnSize = 2;
    return ans;
}
    