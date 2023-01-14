/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>v;
        ListNode* current=head;
        ListNode* check;
        while(current)
        {
            check=current->next;
            while(check)
            {
                if(current->val<check->val)
                {
                    v.push_back(check->val);
                    break;
                }
                check=check->next;
            }
            if(check==NULL) v.push_back(0);
            current=current->next;
        }
        return v;
    }
};