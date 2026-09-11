int cmp(const void* a,const void* b){
    return *(int*)a-*(int*)b;
}
int minPairSum(int* nums,int numsSize){
    qsort(nums,numsSize,sizeof(int),cmp);
    int i=0,j=numsSize-1,ans=0;
    while(i<j){
        int sum=nums[i]+nums[j];
        if(sum>ans) ans=sum;
        i++;
        j--;
    }
    return ans;
}