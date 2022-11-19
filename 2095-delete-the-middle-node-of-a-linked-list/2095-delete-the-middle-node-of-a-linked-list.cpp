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
        ListNode *temp=head;
        int count=0;
        while(temp!=nullptr)
        {
            count++;
            temp=temp->next;
        }
        if(head==NULL||head->next==NULL)
        {
            head=NULL;
            return head;
        }
         else if(head->next->next==NULL)
        {
            head->next=NULL;
            return head;
        }
        else if(count%2==0)
        {
            int k=count/2;
            temp=head;
            int i=1;
            while(i<k)
            {
                temp=temp->next;
                i++;
            }
            temp->next=temp->next->next;
            return head;
            
        }
        else
        {
            int k=(count-1)/2;
            temp=head;
            int i=1;
            while(i<k)
            {
                temp=temp->next;
                i++;
            }
            temp->next=temp->next->next;
            return head;
             
        }
    }
};