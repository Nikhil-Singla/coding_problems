class Solution {
public:
    bool checkString(string s) {
        bool condition = false;
        for(int i = 0; i<s.size(); i++)
        {
            if(s[i] == 'b')
            {
                condition = true;
            }
            if(condition)
            {
                if(s[i] == 'a')
                {
                    return false;
                }
            }
        }
        return true;
    }
};