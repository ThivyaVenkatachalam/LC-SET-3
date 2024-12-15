int majorityElement(int* nums, int numsSize){
    int res = nums[0],
    count = 0;
    for (int i = 0; i < numsSize; i++) 
    {
        if (count == 0)
        {
            res = nums[i];
        }
        if (nums[i] == res) 
        {
            count++;
        } else 
        {
            count--;
        } 
    }        
    return res;
}
