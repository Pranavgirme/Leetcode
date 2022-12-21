class Solution {
public:
    void sortColors(vector<int>& nums) {
        int a=0,b=0,c=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0) a++;
            else if(nums[i]==1) b++;
            else c++;
        }
        int color=0;
        while(a>0)
        {
            nums[color]=0;
            color++;
            a--;
        }
        while(b>0)
        {
            nums[color]=1;
            color++;
            b--;
        }
        while(c>0)
        {
            nums[color]=2;
            color++;
            c--;
        }
    }
};