/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        queue<TreeNode*> que1;
        queue<TreeNode*> que2;
        que1.push(original);
        que2.push(cloned);
        while(!que1.empty()){
            TreeNode* node1=que1.front();
            TreeNode* node2=que2.front();
            que1.pop();
            que2.pop();
            if(node1==target) return node2;
            if(node1->left){
                que1.push(node1->left);
                que2.push(node2->left);
            }
            if(node1->right){
                que1.push(node1->right);
                que2.push(node2->right);
            }
        }
        return NULL;
    }
};