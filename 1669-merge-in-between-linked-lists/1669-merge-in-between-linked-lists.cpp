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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* temp = list1;
        ListNode* pos1;
        ListNode* pos2;
        int count = 0;
        while(temp!=NULL){
            if(count == a - 1){
                pos1 = temp;
            }
            if(count == b+1){
                pos2 = temp;
                break;
            }
            count++;
            temp = temp->next;
        }
        pos1->next = list2;
       
        temp = list2;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = pos2;
        return list1;
    }
};