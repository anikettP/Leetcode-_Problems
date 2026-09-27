int duplicateNumbersXOR(int* nums, int numsSize) {
    int freq[51]={0};
    int ans=0;
    for (int i=0;i<numsSize;i++){
        freq[nums[i]]++;
        if (freq[nums[i]]==2){
            ans^= nums[i];
        }
    }
    return ans;
}