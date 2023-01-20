class Solution {
public:
    
    void back(vector<int>& nums,int i,vector<int>& temp,set<vector<int>>& ans)
    {
        if(i>=nums.size())
        {
            if(temp.size()>1)
            {
                ans.insert(temp);
            }
            return;
        }
        if(temp.empty() || nums[i]>=temp.back())
        {
            temp.push_back(nums[i]);
            back(nums,i+1,temp,ans);
            temp.pop_back();
        }
        back(nums,i+1,temp,ans);
    }
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>>ans;
        vector<int>temp;
        back(nums,0,temp,ans);
        return vector(ans.begin(),ans.end());
    }
};