/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* evenOddBit(int n, int* returnSize) {
    int* ans=(int*)malloc(2*sizeof(int));
    ans[0]=0;
    ans[1]=0;
    *returnSize=2;
    int i=0;
    while(n){
        if(n&1){
            if(i&1){
                ans[1]++;
            }else{
                ans[0]++;
            }
        }
        n>>=1;
        i++;
    }
    return ans;
}