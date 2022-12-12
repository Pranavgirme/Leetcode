class Solution {
public:
    int climbStairs(int n) {
        int i=1,j=2,k=3;
        if(n==1)return 1;
        if(n==2)return 2;
        while(k<=n)
        {
            int temp=j;
            j=i+j;
            i=temp;
            k++;
        }
        return j;
    }
};