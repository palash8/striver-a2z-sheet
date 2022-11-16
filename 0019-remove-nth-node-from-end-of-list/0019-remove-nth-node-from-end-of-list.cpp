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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;
        int count=0;
        if(head==NULL)
            return head;
        else if(head->next==nullptr)
        {
           head=nullptr;
            return head;
        }  
        else if(head->next->next==NULL)
        {
            if(n==1)
                head->next=nullptr;
            else
                head=head->next;
            return head;
        }
        else
        {
            while(temp!=nullptr)
            {
              count++;
              temp=temp->next;
            }
            int k=count-n;
             int m=1;
             ListNode *temp1=head;
            if(k==0)
                head=head->next;
            else
            {
               while(m++<k)
               {
                 temp1=temp1->next;
                }
                 temp1->next=temp1->next->next;
             }
              return head; 
        }
        
       
        
    }
};