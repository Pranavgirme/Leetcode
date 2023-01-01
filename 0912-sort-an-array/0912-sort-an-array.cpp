class Solution {
public:
    void merge(vector<int>& nums,int l,int mid,int r)
    {
        vector<int>temp(r-l+1);
        int i=l,j=mid+1,k=0;
        while(i<=mid && j<=r)
        {
            if(nums[i]<nums[j]) temp[k++]=nums[i++];
            else temp[k++]=nums[j++];
        }
        while(i<=mid) temp[k++]=nums[i++];
        while(j<=r) temp[k++]=nums[j++];
        for(i=0;i<k;i++)
        {
            nums[i+l]=temp[i];
        }
    }

    void mergesort(vector<int>& nums,int l,int r)
    {
        if(l<r)
        {
            int mid=l+(r-l)/2;
            mergesort(nums,l,mid);
            mergesort(nums,mid+1,r);

            merge(nums,l,mid,r);
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums,0,nums.size()-1);
        return nums;
    }
};