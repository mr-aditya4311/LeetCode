class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) 
    {
        int n=grid.size();//Grid ka size store kar raha h(kyunki matrix n*n h).
        int maxDist=-1;//Yeh hamari maximum distance ko track karega jo hume return karni hai.

        //Is loop mein hum grid ko upar se neeche aur left se right traverse kar rahe hain:
        for(int i=0;i<=n-1;i++)
        {
            for(int j=0;j<=n-1;j++)
            {
                if(grid[i][j]==1)
                {
                    grid[i][j]=0;// Agar land hai, toh distance 0 hogi
                }
                else
                {
                    grid[i][j]=200;// Water ke liye infinity maan lete hain (max grid size 100+100=200 hai)
                }
                // Upar aur Left wale cell se minimum distance check kar rahe hain
                if(i>0)
                {
                    grid[i][j]=min(grid[i][j],grid[i-1][j]+1);                
                }
                if (j > 0) 
                {
                    grid[i][j] = min(grid[i][j], grid[i][j-1] + 1);
                }
            }
        }

        //Is loop mein hum grid ko neeche se upar aur right se left reverse direction mein traverse kr rahe hain:
        for (int i = n - 1; i >= 0; i--) 
        {
            for (int j = n - 1; j >= 0; j--) 
            {
                // Neeche aur Right wale cell se minimum distance check kr rahe hain
                if (i < n - 1) 
                {
                    grid[i][j] = min(grid[i][j], grid[i+1][j] + 1);
                }
                if (j < n - 1) 
                {
                    grid[i][j] = min(grid[i][j], grid[i][j+1] + 1);
                }
        
                // Saari directions check karne ke baad max distance update kr rahe hain
                maxDist = max(maxDist, grid[i][j]);
            }
        }
        // Agar grid mein sirf saare lands hain (maxDist == 0) ya sirf saare waters hain (maxDist >= 200), toh -1 return karo.
        // Warna jo sabse badi distance (maxDist) aayi hai, wahi return kar do.
        return (maxDist == 0 || maxDist >= 200) ? -1 : maxDist;
        
    }
};