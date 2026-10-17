class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n;
        int sum;
        n=nums.size();
        sum=n*(n+1)/2;
        for(int i=0;i<=n-1;i++)
        {
            sum=sum-nums[i];
        }
        return sum;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna