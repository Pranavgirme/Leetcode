class Solution {
public:
    bool isHappy(int n) {
        while(n>0)
        {
            int num=n,sum=0;
            while(num>0)
            {
                sum=sum+((num%10)*(num%10));
                num=num/10;
            }
            if(sum==1)
            {
                return true;
            }
            if(sum==4)
            {
                return false;
            }
            n=sum;        
        }
        return false;
    }
};