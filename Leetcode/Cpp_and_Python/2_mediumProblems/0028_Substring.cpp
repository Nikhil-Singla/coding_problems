class Solution {
public:
    int strStr(string haystack, string needle) 
    {
        for(int i = 0, j = needle.size(); i+j-1 < haystack.size(); ++i)
        {
            if(!needle.compare(haystack.substr(i,j)))
            {
                return i;
            }
        }    
        return -1;
    }
};