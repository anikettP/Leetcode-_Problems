int maxRotateFunction(int* nums, int numsSize) {
    long long totalSum=0,currentValue=0,maxValue;
    for (int i=0;i<numsSize;i++){
        totalSum+=nums[i];
        currentValue+=(long long)i*nums[i];
    }
    maxValue=currentValue;
    for (int i=numsSize-1;i>0;i--){
        long long rotatedValue=(long long)numsSize*nums[i];
        currentValue=currentValue+totalSum-rotatedValue;
        if (currentValue>maxValue){
            maxValue=currentValue;
        }
    }
    return maxValue;
}
