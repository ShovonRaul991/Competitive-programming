/*
 * @lc app=leetcode id=1465 lang=cpp
 *
 * [1465] Maximum Area of a Piece of Cake After Horizontal and Vertical Cuts
 */

// @lc code=start
class Solution {
public:
    const long long int mod = 1000000007;
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        
        

        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());

        int nh = horizontalCuts.size();
        int nv = verticalCuts.size();

        vector<int> height = {horizontalCuts[0]}; //to initialize with the first element from the border as for loop from second element
        vector<int> width = {verticalCuts[0]};

    //horizontal difference
        for(int i =1;i<nh;i++)
        {
            height.push_back(horizontalCuts[i]-horizontalCuts[i-1]);
        }
        height.push_back(h-horizontalCuts[nh-1]);

    //vertical difference
        for(int j =1;j<nv;j++)
        {
            width.push_back(verticalCuts[j]-verticalCuts[j-1]);
        }
        width.push_back(w-verticalCuts[nv-1]);

        long long int a = *max_element(height.begin(),height.end());
        long long int b = *max_element(width.begin(),width.end());
        
        //very very importanmt line above and below

     return (a%mod*b%mod);

    }
};
// @lc code=end

