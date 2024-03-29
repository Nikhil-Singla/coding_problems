class Solution {
public:
    bool isValid(string s) 
    {
        stack<char> check;
        check.push('Z');
        for(int i = 0; i < s.length(); i++)
        {
            switch(s[i])
            {
                case '{': 
                case '[':
                case '(': check.push(s[i]) ; break;
                case '}': if(check.top() != '{') {return false;} else {check.pop(); break;}
                case ']': if(check.top() != '[') {return false;} else {check.pop(); break;}
                case ')': if(check.top() != '(') {return false;} else {check.pop(); break;}
            }
        }
        return (check.top() == 'Z');
    }
};