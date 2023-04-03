class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) 
    {
        int highest = 0;
        for(auto &c : candies)
        {
            highest = max(highest, c);
            c += extraCandies; 
        }
        vector<bool> result;
        for(auto c : candies)
        {
            //std::cout<<c<<" ";
            if(c >= highest)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};