/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getMaximumXor(int* nums, int numsSize, int maximumBit, int* returnSize) {
    int* ans=malloc(numsSize * sizeof(int));
    int xor=0;
    int mask=(1<<maximumBit) - 1;

    for (int i=0;i<numsSize;i++) {
        xor ^= nums[i];
    }
    *returnSize=numsSize;
    for (int i=0;i<numsSize;i++){
        ans[i]=xor^mask;
        xor^=nums[numsSize-1-i];
    }
    return ans;
}