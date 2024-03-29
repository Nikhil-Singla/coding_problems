class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int start = 0, end = nums.size()-1;
        vector<int> ans;
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                while((mid > 0) && (nums[mid] == nums[mid-1]))
                {
                    mid--;
                }
                ans.push_back(mid);
                //cout<<mid;
                break;
            }
        }
        while(start <= end)
        {
            int mid = start + (end - start)/2;
            if(nums[mid] < target)
            {
                start = mid + 1;

            }
            else if(nums[mid] > target)
            {
                end = mid - 1;
            }
            else
            {
                while((mid < nums.size()-1) && (nums[mid] == nums[mid+1]))
                {
                    mid++;
                }
                ans.push_back(mid);
                //cout<<mid;
                break;
            }
        }
        if(ans.empty())
        {return {-1, -1};}
        return ans;
    }
};