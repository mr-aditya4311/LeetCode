class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        int m = board.size();
        int n = board[0].size();
        int count = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                // Step 1: Agar empty hai toh aage badhein
                if (board[i][j] == '.') continue;
                
                // Step 2: Agar upar 'X' hai, toh yeh head nahi hai
                if (i > 0 && board[i - 1][j] == 'X') continue;
                
                // Step 3: Agar left mein 'X' hai, toh yeh head nahi hai
                if (j > 0 && board[i][j - 1] == 'X') continue;
                
                // Step 4: Agar dono nahi hain, toh nayi ship ka head mil gaya
                count++;
            }
        }

        return count;
    }
};