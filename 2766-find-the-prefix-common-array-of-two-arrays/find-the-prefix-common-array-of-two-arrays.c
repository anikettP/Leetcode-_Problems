/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findThePrefixCommonArray(int* A, int ASize, int* B, int BSize, int* returnSize) {
    int n=ASize;
    int* C=malloc(n*sizeof(int));
    int* freq=calloc(n+1,sizeof(int));
    int common=0;
    *returnSize=n;
    for(int i=0;i<n;i++){
        if (++freq[A[i]]==2){
            common++;
        }
        if(++freq[B[i]]==2){
            common++;
        }
        C[i]=common;
    }
    return C;
}