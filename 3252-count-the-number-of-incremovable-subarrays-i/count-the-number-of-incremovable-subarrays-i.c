int incremovableSubarrayCount(int* nums, int numsSize) {
    int n=numsSize;
    int ans=0;
    for(int l=0;l<n;l++){
        for(int r=l;r<n;r++){
            int prev=-1,ok=1;
            for(int i=0;i<n;i++){
                if(i>=l&&i<=r) continue;
                if(prev!=-1&&nums[i]<=prev){
                    ok=0;
                    break;
                }
                prev=nums[i];
            }
            if(ok) ans++;
        }
    }
    return ans;
}