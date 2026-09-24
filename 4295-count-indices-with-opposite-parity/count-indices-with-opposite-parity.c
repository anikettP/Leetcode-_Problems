/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* countOppositeParity(int* nums, int numsSize, int* returnSize) {
    int* answer=malloc(numsSize * sizeof(int));
    int even=0;
    int odd=0;
    for (int i=numsSize-1;i>=0;i--) {
        if (nums[i] % 2==0){
            answer[i]=odd;
            even++;
        } else {
            answer[i]=even;
            odd++;
        }
    }
    *returnSize=numsSize;
    return answer;
}