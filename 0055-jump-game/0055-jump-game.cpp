class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int pos=n;
        for(int i=n;i>=0;i--)
        {
            if(nums[i]+i>=pos)
            {
                pos=i;
            }
        }
        if(pos==0)return true;
        else return false;
    }
};