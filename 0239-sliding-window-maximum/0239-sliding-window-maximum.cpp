class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        deque<int>q;
        vector<int>ans;
        int n=nums.size();
        int i=0;
        for(;i<k;i++)
        {
            while(!q.empty() && nums[q.back()]<nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
        }
        ans.push_back(nums[q.front()]);
        for(;i<n;i++)
        {
            while(!q.empty() && q.front()<=i-k)
            {
                q.pop_front();
            }
            while(!q.empty() && nums[q.back()]<=nums[i])
            {
                q.pop_back();
            }
            q.push_back(i);
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};