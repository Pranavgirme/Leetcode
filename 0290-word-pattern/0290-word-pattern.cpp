class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss>>word)
        {
            v.push_back(word);
        }
        if(pattern.size()!=v.size())
        {
            return false;
        }

        unordered_map<char,string>m1;
        unordered_map<string,char>m2;
        for(int i=0;i<pattern.size();i++)
        {
            if(m1.count(pattern[i]))
            {
                if(m1[pattern[i]]!=v[i])
                {
                    return false;
                }
            }
            if(m2.count(v[i]))
            {
                if(m2[v[i]]!=pattern[i])
                {
                    return false;
                }
            }
            m1[pattern[i]]=v[i];
            m2[v[i]]=pattern[i];
        }
        return true;
    }
};