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
       ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int>t;
        ListNode *temp=head;
           int count=0;
        while(temp!=NULL)
        {  
            if(t.find(temp)!=t.end())
            {
                break;
            }
            t[temp]++;
            temp=temp->next;
            
        }
        return temp;
    }
};