class Solution {
public:
    uint32_t reverseBits(uint32_t n) 
    {
        uint32_t rev;
        int k = 0;
        if(!(n | 0))
        {
            return n;
        }
        while(n > 0)
        {
            k++;
            rev <<= 1;
            rev += (n & 1);
            n >>= 1;
        }
        if(k < 32)
        {
            rev <<= 32-k;
        }
        return rev;
    }
};