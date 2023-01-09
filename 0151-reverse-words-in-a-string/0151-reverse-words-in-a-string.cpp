class Solution {
public:
    string reverseWords(string s) {
        vector<string>v;
        stringstream ss(s);
        string word;
        while(ss >> word)
        {
            v.push_back(word);
        }
        reverse(v.begin(),v.end());
        string ans;
        for(int i=0;i<v.size();i++)
        {
            ans+=v[i]+" ";
        }
        ans.pop_back();
        return ans;
    }
};