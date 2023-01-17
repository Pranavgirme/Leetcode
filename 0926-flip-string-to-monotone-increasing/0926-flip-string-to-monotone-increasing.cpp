class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int count_1=0,count_flip=0;
        for(auto i:s)
        {
            if(i=='1')
            {
                count_1++;
            }
            else
            {
                count_flip++;
                count_flip=min(count_flip,count_1);
            }
        }
        return count_flip;
    }
};