class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        unordered_map<int,int>m;
        for(int i=0;i<26;i++)
        {
            m[order[i]]=i;
        }
        for(int i=1;i<words.size();i++)
        {
            bool flag=false;
            string first=words[i-1];
            string second=words[i];
            int n=min(first.size(),second.size());
            for(int j=0;j<n;j++)
            {
                if(m[first[j]]<m[second[j]]) 
                {
                    flag=true;
                    break;
                }
                else if(m[first[j]]>m[second[j]]) return false;
            }
            if(!flag && first.size()>second.size()) return false;
        }
        return true;
    }
};