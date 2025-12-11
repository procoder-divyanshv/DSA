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
        ListNode* slow=head;
        ListNode* fast=head;
        while(slow!= NULL && slow->next!=NULL && fast != NULL && fast->next != NULL){
            slow= slow->next;
            fast = fast->next->next;
            if(slow == fast){
                slow = head;
                while(slow!= fast){
                    slow= slow->next;
                    fast= fast->next; //in this case we have to run the fast one by one.

                }
                return slow;
            }
        }
        return NULL;//this if there is no cycle in the linked list it will return the null value.
        
    }
};