/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findDegrees(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    int n=matrixSize;
    int* ans=(int*)malloc(n *sizeof(int));
    *returnSize=n;
    for (int i=0;i<n;i++){
        ans[i] = 0;
        for (int j=0;j<n;j++){
            ans[i]+=matrix[i][j];
        }
    }
    return ans;
}