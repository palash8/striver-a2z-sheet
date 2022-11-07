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
    int counter(struct ListNode *head)
    {
        ListNode *temp=head;
        int count=0;
        //Code here
        if(head==NULL)
        return 0;
        else
        {
            while(temp->next!=NULL)
            {
                temp=temp->next;
                count++;
                
            }
        }
        return count+1;
    }
        
    ListNode* middleNode(ListNode* head) {
        //get the count value of linked list
        int count=counter(head);
        if(count==0)
            return 0;
        else if(count%2!=0)
        {   ListNode *temp=head;
            int run=(count+1)/2;
            while(run!=1)
            {
                temp=temp->next;
                run--;
             }
         return temp;
        }
        else
        {
            ListNode *temp=head;
            int run=(count)/2;
            while(run!=0)
            {
                temp=temp->next;
                run--;
             
            }
            return temp;
            
        }
        
    }
};