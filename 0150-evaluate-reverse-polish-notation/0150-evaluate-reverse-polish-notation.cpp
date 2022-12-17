class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>s;
        long top1,top2;
        for(auto i:tokens)
        {
            if(i=="+"||i=="-"||i=="*"||i=="/")
            {
                top1=s.top();
                s.pop();
                top2=s.top();
                s.pop();
                if(i=="+") s.push(top1+top2);
                else if(i=="-") s.push(top2-top1);
                else if(i=="*") s.push(top2*top1);
                else s.push(top2/top1);
            }
            else
            {
                s.push(stoi(i));
            }
        }
        return s.top();
    }
};