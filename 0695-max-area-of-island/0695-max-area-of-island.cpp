class Solution {
private:
    int dfs(vector<vector<int>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == 0){
            return 0;
        }
        grid[i][j]=0;
        return 1 + dfs(grid, i + 1, j) + dfs(grid, i - 1, j) + dfs(grid, i, j + 1) + dfs(grid, i, j - 1);

    }
       
    
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n,m,maxArea=0,currentArea;
        n=grid.size();
        m=grid[0].size();
        for(int i=0;i<=n-1;i++)
        {
            for(int j=0;j<=m-1;j++)
            {
                if(grid[i][j]==1)
                {  
                    maxArea=max(maxArea, dfs(grid,i,j));
                   
                }
                
                    
            }
        }return maxArea;
    }
    
};