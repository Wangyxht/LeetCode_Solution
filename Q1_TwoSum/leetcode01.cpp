/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){

    int i,j;
    int* result;
    
    *returnSize=2;

    result=(int*)malloc((*returnSize)*sizeof(int));

    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(target==nums[i]+nums[j])
            {
                result[0]=i;
                result[1]=j;

                return result;
            }
        }
    }
    return NULL;
}