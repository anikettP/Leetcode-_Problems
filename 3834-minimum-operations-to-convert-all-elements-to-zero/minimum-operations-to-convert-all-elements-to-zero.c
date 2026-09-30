int minOperations(int* nums, int numsSize) {
    int stack[100001];
    int top=-1;
    int operations=0;
    for (int i=0;i<numsSize;i++){
        while (top >=0 && stack[top]>nums[i]){
            top--;
        }
        if(nums[i]==0) {
            top=-1;
        } 
        else if(top==-1 || stack[top]<nums[i]){
            stack[++top]=nums[i];
            operations++;
        }
    }
    return operations;
}