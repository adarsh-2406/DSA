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
        // ListNode* temp = head;
        // int n = 0;
        // while(temp != NULL){
        //     n++;
        //     temp = temp->next;
        // }
        // if(n==1) return NULL;
        // n = n /2 ;
        // temp = head;
        // while(n>1){
        // temp=temp->next;
        // n--;
        // }
        // temp->next = temp->next->next;
        // return head;

        // fast and slow pointer;
        if(head->next == NULL) return NULL;
        ListNode* fast=head;
        ListNode* slow=head;
        ListNode* prev=head;
        while(fast != NULL && fast->next != NULL){
            prev = slow;
            slow = slow->next;
            fast = fast->next->next;
        }
        prev->next = slow->next;
        return head; 
    }
};