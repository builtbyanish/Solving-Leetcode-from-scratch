/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* constructRectangle(int area, int* returnSize) {
    int *ans = (int *)malloc(2 * sizeof(int));
    int w = sqrt(area);
    while (area % w != 0) {
        w--;
    }
    ans[0] = area / w;
    ans[1] = w;        
    *returnSize = 2;
    return ans;    
}