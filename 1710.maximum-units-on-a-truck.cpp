/*
 * @lc app=leetcode id=1710 lang=cpp
 *
 * [1710] Maximum Units on a Truck
 */

// @lc code=start
bool compare(vector<int> v1, vector<int> v2)
    {
        return v1[1]>v2[1];
    }
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        int totalUnit =0,i =0;
        sort(boxTypes.begin(), boxTypes.end(), compare);

        while(truckSize>0 && i<boxTypes.size())
        {
            if(boxTypes[i][0]<truckSize)
            {
                totalUnit += boxTypes[i][0] * boxTypes[i][1];
                truckSize -= boxTypes[i][0];
            }
            else{
                int canTake = truckSize;
                truckSize = 0;
                totalUnit += canTake*boxTypes[i][1];
            }
            i++;
        }
        return totalUnit;
    }
};
// @lc code=end

