class Solution {
public:
    int totalMoney(int n) {
        int sum=0,amount=1;
        for(int i=1;i<=n;i++)
        {
            sum+=amount;
            amount++;
            if(i%7==0)
            {
                amount=(i/7)+1;
            }
        }
        return sum;
    }
};