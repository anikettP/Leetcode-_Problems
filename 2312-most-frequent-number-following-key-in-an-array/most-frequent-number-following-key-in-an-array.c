int mostFrequent(int* nums, int numsSize, int key) {
     int freq[1001]={0},max=0,ans=0;
    for(int i=0;i<numsSize-1;i++){
        if(nums[i]==key){
            freq[nums[i+1]]++;
            if(freq[nums[i+1]]>max){
                max=freq[nums[i+1]];
                ans=nums[i+1];
            }
        }
    }
    return ans;
}