class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(auto q:queries)
        {
            int count=0;
            for(auto n:nums)
            {
                if(n<=q)
                {
                    q=q-n;
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans.push_back(count);
        }
        return ans;
    }
};