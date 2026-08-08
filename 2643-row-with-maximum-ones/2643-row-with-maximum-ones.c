/**
 * Return an array of size *returnSize.
 * The returned array must be malloced, assume caller calls free().
 */

int* rowAndMaximumOnes(int** mat, int matSize, int* matColSize, int* returnSize) {
    
    int maxOnes = 0;
    int rowIndex = 0;

    for (int i = 0; i < matSize; i++) {
        int count = 0;

        for (int j = 0; j < matColSize[i]; j++) {
            if (mat[i][j] == 1) {
                count++;
            }
        }

        if (count > maxOnes) {
            maxOnes = count;
            rowIndex = i;
        }
    }

    int* result = (int*)malloc(2 * sizeof(int));

    result[0] = rowIndex;
    result[1] = maxOnes;

    *returnSize = 2;

    return result;
}