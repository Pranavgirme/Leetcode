class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==0)
        {
            return 0;
        }
        else if(n<0)
        {
            return 0;
        }
        else
        {        
            return !(n&(n-1));
        }
    }
};