class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> s;
        int l =0,r= nums.size()-1;
        int sum = target*2;
        if(nums.size()>0)
        {
            while(l<=r)
            {
                if(nums[l]+nums[r]==sum && nums[l]==nums[r] && nums[l]==target)
                {   
                    s.push_back(l);
                    s.push_back(r);
                    return s;
                }
                else if(nums[l]+nums[r]>sum)
                    r--;
                else
                    l++;
            }
        }
        else
        {
            s.push_back(-1);
            s.push_back(-1);
            return s;
        }
     return {-1,-1};
    }
};