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
        ListNode *d1=headA;
        ListNode *d2=headB;
        int l1=0,l2=0;
        while(d1!=NULL)
        {
            l1++;
            d1=d1->next;
        }
        while(d2!=NULL)
        {
            l2++;
            d2=d2->next;
        }
        d1=headA;
        d2=headB;
       if(l1>=l2)
       { 
           int difference =l1-l2;
           while(difference--)
           {
              d1=d1->next;
           }
       }
       else
       {   
           int difference =l2-l1;
           while(difference--)
           {
               d2=d2->next;
           }
       }
       while(d1 != NULL) {
            if(d1 == d2) return d1;
            d2 = d2->next;
            d1 = d1->next;
        }
        return d1;
 }
};