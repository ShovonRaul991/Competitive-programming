/*
 * @lc app=leetcode id=344 lang=cpp
 *
 * [344] Reverse String
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        for(auto first = s.begin(), last = s.end()-1; first<last; first++, last--)
        {
            swap(*first, *last);
        }
    }
};
// @lc code=end

