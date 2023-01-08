/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1=headA;
        ListNode* ptr2=headB;
        int m=0,n=0;
        while(ptr1)
        {
            m++;
            ptr1=ptr1->next;
        }
        while(ptr2)
        {
            n++;
            ptr2=ptr2->next;
        }
        int d=abs(m-n);
        if(m>n)
        {
            while(d--)
            {
                headA=headA->next;
            }
        }
        else
        {
            while(d--)
            {
                headB=headB->next;
            }
        }
        while(headA && headB)
        {
            if(headA==headB)
            {
                return headA;
            }
            headA=headA->next;
            headB=headB->next;
        }
        return NULL;
    }
};