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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL) return NULL;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            TreeNode* temp=que.front();
            que.pop();
            if(temp->val==val) return temp;
            if(temp->left!=NULL) que.push(temp->left);
            if(temp->right!=NULL) que.push(temp->right);
        }
        return NULL;
    }
};