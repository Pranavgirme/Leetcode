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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==NULL)
        {
            return NULL;
        }
        ListNode* p1;
        p1=head;
        int count=0;
        while(p1!=NULL)
        {
            count++;
            p1=p1->next;
        }
        int mid=(count/2)-1;
        ListNode* p2;
        p2=head;
        while(mid--)
        {
            p2=p2->next;
        }
        p2->next=p2->next->next;
        return head;
    }
};