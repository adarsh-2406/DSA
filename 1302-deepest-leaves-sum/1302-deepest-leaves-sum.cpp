/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        int ans = 0;
        if(root == NULL){
            return 0;
        }
        queue< TreeNode* > q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int sum = 0;
            for(int i=0; i<size; i++){
                TreeNode* temp = q.front();
                q.pop();
                sum += temp->val;
                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            ans = sum;
        }
        return ans;
    }
};