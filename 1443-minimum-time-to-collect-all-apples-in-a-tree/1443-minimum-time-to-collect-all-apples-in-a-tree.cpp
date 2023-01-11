class Solution {
public:
    vector<vector<int>>adj;
    int dfs(vector<bool>& hasApple,int currentNode,int parent,int dis)
    {
        int dFromChild=0,dFromRoot=0;
        for(auto i:adj[currentNode])
        {
            if(i!=parent)
            {
                dFromRoot=dfs(hasApple,i,currentNode,dis+1);
                if(dFromRoot) dFromChild+=dFromRoot-dis;
            }
        }
        return dFromChild || hasApple[currentNode] ? dFromChild+dis:0;
    }

    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        adj.resize(n);
        for(auto i:edges)
        {
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }

        return dfs(hasApple,0,-1,0)*2;
    }
};