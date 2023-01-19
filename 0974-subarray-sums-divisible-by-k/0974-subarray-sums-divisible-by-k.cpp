class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>m;
        m[0]++;
        int sum=0,rem=0,ans=0;
        for(auto i:nums)
        {
            sum+=i;
            rem=((sum%k)+k)%k;
            if(m[rem])
            {
                ans+=m[rem];
            }
            m[rem]++;
        }
        return ans;
    }
};