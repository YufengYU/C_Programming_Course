int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int count, countMax;
    countMax = 0;
    count = 0;
    int i;
    for (i=0; i<numsSize; i++)
    {
        if (nums[i]==1)
            count = count+1;
        else
        {
            if (count>countMax)
                countMax = count;
            count = 0;
        }
    }
    if (count>countMax)
        countMax = count;
    return countMax;
}