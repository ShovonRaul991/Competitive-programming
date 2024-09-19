/*
 * @lc app=leetcode id=1046 lang=cpp
 *
 * [1046] Last Stone Weight
 */

// @lc code=start
class Solution {
public:
    int lastStoneWeight(std::vector<int>& stones) {
        std::priority_queue<int> stonesOrder;
        for(int i=0;i<stones.size();i++){
            stonesOrder.push(stones[i]);
        }

        while(stonesOrder.size()>1){
            int first = stonesOrder.top();
            stonesOrder.pop();
            int second = stonesOrder.top();
            stonesOrder.pop();
            int differ = first - second;
            if(differ >0){
                stonesOrder.push(differ);
            }
        }
        if(stonesOrder.size()>0){
            return stonesOrder.top();
        }
        else
        return 0;
    }
};
// @lc code=end

