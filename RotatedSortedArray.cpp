int l = 0, r = nums.size()-1;

while (l <= r) 
{
    int mid = (l+r) / 2;
    if (target == nums[mid])
        return mid;
    
    // if mid is greater then low, mid belongs to left sorted portion
    if(nums[l] <= nums[mid]) 
    {
        // target is not in left portion
        if(target > nums[mid] || target < nums[l])
            l = mid + 1;
        else
            r = mid - 1;
    }
    // if mid is smaller than low its obvious it will be in right sorted portion
    else
    {
        // target is not in right portion
        if(target < nums[mid] || target > nums[r])
            r = mid - 1;
        else
            l = mid + 1;
    }
}
return -1;