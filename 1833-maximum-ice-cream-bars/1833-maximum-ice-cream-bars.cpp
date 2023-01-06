class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count=0;
        for(auto i:costs)
        {
            if(i>coins)
            {
                break;
            }
            coins-=i;
            count++;
        }
        return count;
    }
};