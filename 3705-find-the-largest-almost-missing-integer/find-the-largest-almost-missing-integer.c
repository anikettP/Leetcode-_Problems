int largestInteger(int* nums, int numsSize, int k) {
    int count[51]={0};
    for(int i = 0; i <= numsSize-k;i++) {
        int seen[51] = {0};
        for(int j=i;j<i+k;j++) {
            int x=nums[j];
            if(seen[x]==0) {
                seen[x]=1;
                count[x]++;
            }
        }
    }
    for(int i=50;i>=0;i--) {
        if(count[i]==1)
            return i;
    }
    return -1;
}