class Solution {
public:
    int smallestEqual(vector<int>& nums) 
    {
        for(int i = 0, count = 0; i < nums.size(); i++, count++)
        {
            if(count == 10)
            {
                count = 0;
            }
            if(nums[i] == count)
            {
                return i;
            }
        }
        return -1;
    }
};