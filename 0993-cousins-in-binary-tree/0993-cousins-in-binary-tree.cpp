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
    bool isCousins(TreeNode* root, int x, int y) {
        if(root == NULL){
            return false;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            int x1 = 0;
            int y1 = 0;
            for(int i=0; i<size ; i++){
                TreeNode* temp = q.front();
                q.pop();
                if(temp->val == x ) x1 = 1;
                if(temp->val == y) y1 = 1;

                if(temp->left != NULL && temp->right != NULL){
                    if((temp->left->val == x && temp->right->val == y) || (temp->left->val == y && temp->right->val == x)){
                        return false;
                    }
                }

                if(temp->left != NULL){
                    q.push(temp->left);
                }
                if(temp->right != NULL){
                    q.push(temp->right);
                }
            }
            if(x1 == 1 && y1 == 1) return true;
        }
        return false;
    }
};