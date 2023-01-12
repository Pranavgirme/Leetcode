class Solution {
public:
    vector<vector<int>>adj;
    vector<int>ans;

    vector<int>dfs(int node,int parent,string& labels)
    {
        vector<int>count(26,0);
        count[labels[node]-'a']=1;
        for(auto i:adj[node])
        {
            if(i==parent) continue;

            vector<int>temp=dfs(i,node,labels);
            for(int k=0;k<26;k++)
            {
                count[k]+=temp[k];
            }
        }
        ans[node]=count[labels[node]-'a'];
        return count;
    }

    vector<int> countSubTrees(int n, vector<vector<int>>& edges, string labels) {
        adj.resize(n);
        ans.resize(n);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        dfs(0,-1,labels);
        return ans;
    }
};