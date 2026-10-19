class Solution {
private:
    int getVal(char c) {
        switch(c) {
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }
    }
public:
    int romanToInt(string s) {
        int total = 0;
        int n = s.length();
        
        for (int i = 0; i < n; i++) {
            if (i + 1 < n && getVal(s[i]) < getVal(s[i + 1])) {
                total -= getVal(s[i]);
            } else {
               
                total += getVal(s[i]);
            }
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna