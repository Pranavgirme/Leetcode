class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int>m;
        int mr=0;
        for(int i=0;i<tasks.size();i++)
        {
            m[tasks[i]]++;
        }
        for(auto i:m)
        {
            if(i.second==1) return -1;
            if(i.second%3==0)
            {
                mr=mr+i.second/3;
            }
            else
            {
                mr=mr+(i.second/3)+1;
            }
        }
        return mr;
    }
};