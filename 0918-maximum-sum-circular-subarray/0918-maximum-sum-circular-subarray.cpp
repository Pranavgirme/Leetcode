class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int mx=0, mn=0, max_sum=nums[0], min_sum=nums[0], sum=0;
        for(auto i:nums)
        {
            sum+=i;
            
            mx=max(mx,0)+i;
            max_sum=max(max_sum,mx);
            
            mn=min(mn,0)+i;
            min_sum=min(min_sum,mn);
        }
        if(sum==min_sum) return max_sum;
        return max(max_sum,sum-min_sum);
    }
};