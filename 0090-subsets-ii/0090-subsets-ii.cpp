class Solution {
public:
    vector<vector<int>>ans;
    void sub(vector<int>nums,int i,vector<int>temp)
    {
        if(i==nums.size())
        {
            for(int i=0;i<ans.size();i++)
            {
                if(temp==ans[i])
                {
                    return;
                }
            }
            ans.push_back(temp);
            return;
        }
        sub(nums,i+1,temp);
        temp.push_back(nums[i]);
        sub(nums,i+1,temp);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<int>temp;
        sub(nums,0,temp);
        return ans;  
    }
};