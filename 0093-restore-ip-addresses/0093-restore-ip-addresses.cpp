class Solution {
public:
    int valid(string str)
    {
        if(str[0]=='0') return false;
        int num=stoi(str);
        return num<=255;
    }
    
    void helper(string s,int i,int partition,string temp,vector<string>&ans)
    {
        if(i==s.size() || partition==4)
        {
            if(i==s.size() && partition==4)
            {
                ans.push_back(temp.substr(0,temp.size()-1));
            }
            return;
        }
                              
        helper(s,i+1,partition+1,temp+s[i]+".",ans);
        
        if(i+2<=s.size() && valid(s.substr(i,2)))
        {
            helper(s,i+2,partition+1,temp+s.substr(i,2)+".",ans); 
        }
        
        if(i+3<=s.size() && valid(s.substr(i,3)))
        {
            helper(s,i+3,partition+1,temp+s.substr(i,3)+".",ans);
        }
    }
    
    vector<string> restoreIpAddresses(string s) {
        vector<string>ans;
        helper(s,0,0,"",ans);
        return ans;
    }
};