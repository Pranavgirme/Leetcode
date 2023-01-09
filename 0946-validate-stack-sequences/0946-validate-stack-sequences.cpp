class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n=pushed.size();
        int j=0;
        stack<int>s;
        for(auto i:pushed)
        {
            s.push(i);
            while(!s.empty() && s.top()==popped[j])
            {
                s.pop();
                j++;
            }
        }
        return n==j;
    }
};