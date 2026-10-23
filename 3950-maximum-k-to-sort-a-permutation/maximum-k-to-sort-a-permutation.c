int sortPermutation(int* nums, int numsSize) {
    int ans=-1;
    for (int i=0;i<numsSize;i++) {
        if (nums[i]!=i){
            if (ans==-1) {
                ans=nums[i];
            } else{
                ans=ans & nums[i];
            }
        }
    }
    if (ans==-1 || ans==0){
        return 0;
    }
    return ans;
}