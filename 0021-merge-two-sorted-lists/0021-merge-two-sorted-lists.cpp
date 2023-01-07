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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        ListNode* l3=new ListNode(-1);
        ListNode* d=l3;
        while(list1 && list2)
        {
            if(list1->val < list2->val)
            {
                d->next=list1;
                list1=list1->next;
            }
            else
            {
                d->next=list2;
                list2=list2->next;
            }
            d=d->next;
        }
        while(list1)
        {
            d->next=list1;
            list1=list1->next;
            d=d->next;
        }
        while(list2)
        {
            d->next=list2;
            list2=list2->next;
            d=d->next;
        }
        return l3->next;
    }
};