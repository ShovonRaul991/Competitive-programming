/*
 * @lc app=leetcode id=1034 lang=cpp
 *
 * [1034] Coloring A Border
 */

// @lc code=start
class Solution {
public:
    void dfs(vector<vector<int>>& grid,vector<vector<int>>& visited, int i, int j,int currentColor, int color){
        if(i<0 or i>=grid.size() or j<0 or j>=grid[0].size() or grid[i][j]!=currentColor or visited[i][j]) return;
        visited[i][j] = 1;
        vector<int> directionArray = {-1,0,1,0,-1};
        for(int k = 0;k<4;k++){
            int x = i+directionArray[k];
            int y = j+directionArray[k+1];
            if(x<0 or x>=grid.size() or y<0 or y>=grid[0].size() or (grid[x][y]!=currentColor and !visited[x][y])){
                grid[i][j]=color;
            }
            dfs(grid, visited, x, y, currentColor, color);
        }
    }

    vector<vector<int>> colorBorder(vector<vector<int>>& grid, int row, int col, int color) {
        if(grid[row][col]==color) return grid;
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> visited_grid(m, vector<int>(n,0));
        dfs(grid,visited_grid, row, col, grid[row][col], color );
        return grid;
    }
};
// @lc code=end

