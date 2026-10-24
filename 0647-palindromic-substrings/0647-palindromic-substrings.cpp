class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        vector<vector<bool>> t(n, vector<bool>(n, false));

        for (int g = 0; g < n; g++) 
        {
            for (int i = 0, j = g; j < n; i++, j++)
            {
                if (g == 0) 
                {
                    t[i][j] = true;
                } 
                else if (g == 1) 
                {
                    if (s[i] == s[j]) t[i][j] = true;
                } 
                else 
                {
                    if (s[i] == s[j] && t[i + 1][j - 1]) t[i][j] = true;
                }
                
                if (t[i][j]) count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna