int minMoves(int* nums, int numsSize) {
    int minNumber,i;
    minNumber = nums[0];
    for (i=1; i<numsSize; i++)
        if (nums[i]<minNumber)
            minNumber = nums[i];

    int count;
    count = 0;
    for (i=0; i<numsSize; i++)
        count = count + nums[i] - minNumber;

    return count;
}