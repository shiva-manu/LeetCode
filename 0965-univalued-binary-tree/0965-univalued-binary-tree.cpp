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
    bool isUnivalTree(TreeNode* root) {
        int prev=0;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            TreeNode* temp=que.front();
            que.pop();
            if(prev!=0 && temp->val!=prev) return false;
            prev=temp->val;
            if(temp->left!=NULL) que.push(temp->left);
            if(temp->right!=NULL) que.push(temp->right);
        }
        return true;
    }
};