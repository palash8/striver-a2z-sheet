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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL)
            return head;
        if(head->next==NULL)
            return head;
        if(head->next->next==NULL)
        {
            ListNode *temp=head;
           temp->next->next=head;
            temp=temp->next;
            head->next=NULL;
            head=temp;
            return head;
        } 
         else
        { ListNode *temp0=NULL;
          ListNode *temp1=head;
          ListNode *temp2=head->next;
          head->next=NULL;
          while(temp2->next!=nullptr)
          {
             temp0=temp1;
             temp1=temp2;
             temp2=temp2->next;
              temp1->next=temp0;
          }
         temp1->next=temp0;
         temp2->next=temp1;
         head=temp2;
         return head;
        }
        
        
    }
};