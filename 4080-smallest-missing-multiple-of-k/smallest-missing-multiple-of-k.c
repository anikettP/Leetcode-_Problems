int missingMultiple(int* nums, int numsSize, int k) {
     int present[101]={0};
    for (int i=0;i<numsSize;i++) {
        present[nums[i]]=1;
    }
    for(int multiple=k;;multiple+= k){
        if (multiple>100||present[multiple]==0) {
            return multiple;
        }
    }
}