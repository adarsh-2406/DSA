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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        int count = 1;
        while(count != left && curr != NULL){
            prev = curr;
            curr = curr->next;
            count++;
        }
        ListNode* first_connect = prev;
        ListNode* second_connect = curr;
        while(count <= right){
            ListNode* nextnode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextnode;
            count++;
        }
        if(first_connect != NULL){
        first_connect->next = prev;
        }
        else head = prev;
        second_connect->next = curr;
        return head;
    }
};