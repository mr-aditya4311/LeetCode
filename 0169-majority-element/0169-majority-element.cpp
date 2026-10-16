class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate=nums[0];
        int n,count=1;
        n=nums.size();
        for(int i =1;i<=n-1;i++)
        {
            if(candidate==nums[i])
            {
            count=count+1;
            }
            else {
                if(count==0){
                candidate=nums[i];
                count=1;
                }
                if(count!=0)
                {
                count--;
                }
            }
        }return candidate;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna