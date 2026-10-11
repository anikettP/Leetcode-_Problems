int sumOfSquares(int* nums, int numsSize){
    int sumofSquares=0;
    for (int i=1;i<=numsSize;i++) {
        if (numsSize% i==0) {
            int x=nums[i-1] * nums[i - 1];
            sumofSquares+= x;
        }
    }
    return sumofSquares;
}