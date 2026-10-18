class Solution {
public:
    bool isPalindrome(int x) {
        int num;
        long reverse=0;
        int temp=x;
        while(temp>0)
        {
            num=temp%10;
            reverse=reverse*10+num;
            temp=temp/10;
        }
        if(reverse==x)
        {
            return true;
        }
        else 
            return false;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna