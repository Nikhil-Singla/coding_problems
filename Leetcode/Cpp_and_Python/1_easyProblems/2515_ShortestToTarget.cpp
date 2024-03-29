class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) 
    {
        vector<int> location;
        int result = 200, n = words.size();

        for(int i = 0; i < n; i++)
        {
            if(words[i] == target)
            {
                location.push_back(i);
            }
        }    
        if(location.empty())
        {
            return -1;
        }
        for(auto c : location)
        {
            int reverse = abs(n - abs(startIndex - c));
            int forward = abs(startIndex - c);
            cout<<"at:"<<c<<" is - "<<reverse<<" : "<<forward<<"\n";
            result = min(result, forward);
            result = min(result, reverse);
        }
        return result;
    }
};