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
    void insert(ListNode* temp, int a, int b){
        while(b!=0){
            int x = b;
            b = a%b;
            a = x;
        }
        ListNode* add = new ListNode(a);
        add->val = a;
        add->next = temp->next;
        temp->next = add;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while(temp->next != NULL){
            int a = temp->val;
            int b = temp->next->val;
            insert( temp,a,b);
            temp = temp->next->next;
        }
        return head;
    }
};