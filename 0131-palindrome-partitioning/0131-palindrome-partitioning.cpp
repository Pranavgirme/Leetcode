class Solution {
public:
    void dfs(string s,int index,vector<string>&temp,vector<vector<string>>&ans)
    {
        if(index==s.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=index;i<s.size();i++)
        {
            if(Palindrome(s,index,i))
            {
                temp.push_back(s.substr(index,i-index+1));
                dfs(s,i+1,temp,ans);
                temp.pop_back();
            }
        }
    }

    int Palindrome(string s,int l,int h)
    {
        while(l<h)
        {
            if(s[l]!=s[h]) return false;
            l++,h--;
        }
        return true;
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        dfs(s,0,temp,ans);
        return ans;
    }
};