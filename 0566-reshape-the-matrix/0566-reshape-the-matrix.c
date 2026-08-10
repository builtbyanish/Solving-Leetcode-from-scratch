/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned in *returnColumnSizes.
 */
int** matrixReshape(int** mat, int matSize, int* matColSize,
                    int r, int c, int* returnSize,
                    int** returnColumnSizes)
{
    int m = matSize;
    int n = matColSize[0];

    if (m * n != r * c)
    {
        *returnSize = m;
        *returnColumnSizes = matColSize;
        return mat;
    }

    int** ans = malloc(r * sizeof(int*));
    *returnColumnSizes = malloc(r * sizeof(int));

    for (int i = 0; i < r; i++)
    {
        ans[i] = malloc(c * sizeof(int));
        (*returnColumnSizes)[i] = c;
    }

    for (int i = 0; i < m * n; i++)
    {
        ans[i / c][i % c] = mat[i / n][i % n];
    }

    *returnSize = r;
    return ans;
}