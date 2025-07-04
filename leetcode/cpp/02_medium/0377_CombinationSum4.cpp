class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) 
    {
        int ans = 0;
        vector<unsigned int> dp(target+1, 0);
        dp[0] = 1;
        for(int i = 1; i <= target; i++)
        {
            for(auto &c : nums)
            {
                if(i - c >= 0)
                {
                    dp[i] += dp[i - c];
                }
            }  
        }
        return dp[target];
    }
};