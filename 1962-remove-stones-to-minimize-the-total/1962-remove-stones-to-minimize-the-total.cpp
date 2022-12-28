class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>q;
        int sum=0,largest;
        for(auto i:piles)
        {
            q.push(i);
            sum+=i;
        }
        for(int i=0;i<k;i++)
        {
            largest=q.top();
            q.pop();
            sum-=largest/2;
            q.push(largest-largest/2);
        }
        return sum;
    }
};