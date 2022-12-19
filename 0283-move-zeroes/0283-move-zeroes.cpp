class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count=0,j=0,n=nums.size();
        for(int i=0;i<n;i++)
        {
            if(nums[i]!=0)
            {
                nums[j]=nums[i];
                j++;
            }
        }
        while(j<n)
        {
            nums[j]=0;
            j++;
        }
    }
};