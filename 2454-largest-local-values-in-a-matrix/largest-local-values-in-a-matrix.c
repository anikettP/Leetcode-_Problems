/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** largestLocal(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
     int size=gridSize-2;

    int** ans=malloc(size*sizeof(int*));
    *returnColumnSizes=malloc(size*sizeof(int));

    for(int i=0;i<size;i++){
        ans[i]=malloc(size*sizeof(int));
        (*returnColumnSizes)[i]=size;

        for(int j=0;j<size;j++){
            int max=0;

            for(int x=i;x<i+3;x++){
                for(int y=j;y<j+3;y++){
                    if(grid[x][y]>max)
                        max=grid[x][y];
                }
            }

            ans[i][j]=max;
        }
    }

    *returnSize=size;
    return ans;
}