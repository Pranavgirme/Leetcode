class Solution {
public:
    bool detectCapitalUse(string word) {
        int u=0;
        for(int i=0;i<word.size();i++)
        {
            if(isupper(word[i]))
            {
                u++;
            }
        }
        if(u==0 || u==word.size()) return 1;
        if(u==1 && isupper(word[0])) return 1;
        return false;
    }
};