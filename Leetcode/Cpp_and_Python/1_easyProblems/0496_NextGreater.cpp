class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) 
    {
        unordered_map<int, int> map;
        stack<int> s;
        for(int const n : nums2)
        {
            while(s.size() && s.top() < n)
            {
                map[s.top()] = n; 
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans(nums1.size(), - 1);
        for(int i = 0; i < nums1.size(); i++)
        {
            auto const itr = map.find(nums1[i]);
            if (itr != map.end()) 
            {
                ans[i] = itr->second;
            }
        }
        return ans;
    }
};