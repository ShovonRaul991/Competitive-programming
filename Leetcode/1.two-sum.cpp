/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 */

// @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ret;
        int size = numbers.size();
        int diff;
        unordered_map<int,int> m;
        for(int i =0;i<size;i++)
        {
            diff = target - numbers[i];
            if(m.find(diff)!=m.end() && m.find(diff)->second != i)
            {
                
                ret.push_back(m.find(diff)->second);
                ret.push_back(i);
                return ret;
                }
            m[numbers[i]]=i;
        }
        return ret;
    }
};
// @lc code=end

