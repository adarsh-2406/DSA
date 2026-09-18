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
    ListNode* mergeNodes(ListNode* head) {
        int sum = 0;
        ListNode* temp = head;
        ListNode* check = head->next;
        while(check != NULL){
            sum = 0;
            while(check->val != 0){
                sum += check->val;
                check = check->next;
            }
            temp->val = sum;
            check = check->next;
            if(check == NULL) break;
            temp = temp->next;
        }
        temp->next = NULL;
        return head;
        // vector<int>ans;
        // while(temp->next != NULL){
        //     if(temp->val == 0) count++;
        //     else if (count == 2){
        //         count = 0;
        //         ans.push_back(sum);
        //         sum = 0;
        //     }
        //     else sum+= temp->val;
        // }
        // return ans;
    }
};