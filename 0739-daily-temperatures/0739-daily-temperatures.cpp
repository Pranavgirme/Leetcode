class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n=temperatures.size();
        stack<int>s;
        s.push(0);
        for(int i=1;i<n;i++)
        {
            while(!s.empty()&&temperatures[i]>temperatures[s.top()])
            {
                temperatures[s.top()]=i-s.top();
                s.pop();
            }
            s.push(i);
        }
        while(!s.empty())
        {
            temperatures[s.top()]=0;
            s.pop();
        }
        return temperatures;
    }
};