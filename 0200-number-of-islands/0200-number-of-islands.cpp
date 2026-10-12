class Solution {
private:
    void dfs(vector<vector<char>>& grid, int i, int j) {
        int n = grid.size();
        int m = grid[0].size();
        if (i < 0 || i >= n || j < 0 || j >= m || grid[i][j] == '0') 
            return;
        grid[i][j] = '0';
        dfs(grid, i + 1, j);
        dfs(grid, i - 1, j);
        dfs(grid, i, j + 1);
        dfs(grid, i, j - 1);
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n,m,count=0;
        n=grid.size();
        m=grid[0].size();
        
        for(int i=0;i<=n-1;i++)
        {
            for(int j=0;j<=m-1;j++)
            {
                
               
                if(grid[i][j]=='1')
                {  
                    count=count+1;
                    dfs(grid,i,j);
                }
                else 
                    count=count;

            }

        }return count;
        
    }
};

