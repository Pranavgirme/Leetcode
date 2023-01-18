class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int leftbar=height[0],rightbar=height[n-1];
        int ans=0;
        while(left<=right)
        {
            if(leftbar<rightbar)
            {
                if(height[left]>leftbar)
                {
                    leftbar=height[left];
                }
                else
                {
                    ans+=leftbar-height[left];
                    left++;
                }
            }
            else
            {
                if(height[right]>rightbar)
                {
                    rightbar=height[right];
                }
                else
                {
                    ans+=rightbar-height[right];
                    right--;
                }
            }
        }
        return ans;
    }
};