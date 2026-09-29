/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findIntersectionValues(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    int* ans=malloc(2*sizeof(int));
    ans[0]=0;
    ans[1]=0;
    *returnSize=2;
    for(int i=0;i<nums1Size;i++){
        for(int j=0;j<nums2Size;j++){
            if(nums1[i]==nums2[j]){
                ans[0]++;
                break;
            }
        }
    }
    for(int i=0;i<nums2Size;i++){
        for(int j=0;j<nums1Size;j++){
            if(nums2[i]==nums1[j]){
                ans[1]++;
                break;
            }
        }
    }
    return ans;
}