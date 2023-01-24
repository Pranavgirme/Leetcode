class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,mx=0;
        for(auto i:nums)
        {
            if(i==1)
            {
                count++;
            }
            else
            {
                count=0;
            }
            mx=max(mx,count);
        }
        return mx;
    }
};