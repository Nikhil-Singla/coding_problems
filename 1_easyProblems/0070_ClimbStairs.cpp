class Solution {
public:

    int climbStairs(int n) 
    {
        vector<int> ans(n+1, 0);
        // base cases
        if(n <= 0) return 0;
        if(n == 1) return 1;
        if(n == 2) return 2;
        
        ans[0] = 0;
        ans[1] = 1;
        ans[2] = 2;
        
        for(int i=3; i<=n; i++)
        {
            ans[i] = ans[i-1] + ans[i-2];
        }
        return ans[n];
    }
};