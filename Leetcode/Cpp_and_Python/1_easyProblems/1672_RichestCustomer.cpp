class Solution {
public:
    
    int sum(vector<int> banks)
    {
        int result = 0;
        for(auto const &c : banks)
        {
            result += c;
        }
        return result;
    }

    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int ans = 0;
        for(auto const &c : accounts)
        {
            ans = max(ans, sum(c));
        }
        return ans;
    }
};