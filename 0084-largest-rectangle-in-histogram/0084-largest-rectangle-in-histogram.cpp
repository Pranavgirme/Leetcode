class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        stack<int>s1;
        vector<int>prev;
        for(int i=0;i<n;i++)
        {
            while(!s1.empty() && heights[s1.top()]>=heights[i])
            {
                s1.pop();
            }
            if(s1.empty())
            {
                prev.push_back(-1);
            }
            else
            {
                prev.push_back(s1.top());
            }
            s1.push(i);
        }
        
        stack<int>s2;
        vector<int>next;
        for(int i=n-1;i>=0;i--)
        {
            while(!s2.empty() && heights[s2.top()]>=heights[i])
            {
                s2.pop();
            }
            if(s2.empty())
            {
                next.push_back(n);
            }
            else
            {
                next.push_back(s2.top());
            }
            s2.push(i);
        }
        reverse(next.begin(),next.end());
        
        int ans=0,area=0;
        for(int i=0;i<n;i++)
        {
            ans=(next[i]-prev[i]-1)*heights[i];
            area=max(area,ans);
        }
        return area;
    }
};