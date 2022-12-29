class Solution {
public:
    vector<int> getOrder(vector<vector<int>>& tasks) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<>>q;
        vector<int>ans;
        for(int i=0;i<tasks.size();i++)
        {
            tasks[i].push_back(i);
        }
        sort(tasks.begin(),tasks.end());
        long long currentTime=tasks[0][0];
        q.push({tasks[0][1],tasks[0][2]});
        int i=1;
        while(i<tasks.size())
        {
            if(q.empty() && currentTime<tasks[i][0])
            {
                currentTime=tasks[i][0];
            }
            while(i<tasks.size() && currentTime>=tasks[i][0])
            {
                q.push({tasks[i][1],tasks[i][2]});
                i++;
            }
            ans.push_back(q.top().second);
            currentTime+=q.top().first;
            q.pop();
        }
        while(!q.empty())
        {
            ans.push_back(q.top().second);
            currentTime+=q.top().first;
            q.pop();
        }
        return ans;
    }
};