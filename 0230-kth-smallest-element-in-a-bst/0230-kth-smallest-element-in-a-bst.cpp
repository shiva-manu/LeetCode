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
    int bfs(TreeNode* root,int k){
        vector<int> result;
        queue<TreeNode*>que;
        que.push(root);
        while(!que.empty()){
            TreeNode* temp=que.front();
            que.pop();
            result.push_back(temp->val);
            if(temp->left){
                que.push(temp->left);
            }
            if(temp->right){
                que.push(temp->right);
            }
        }
        sort(result.begin(),result.end());
        return result[k-1];
    }
    int kthSmallest(TreeNode* root, int k) {
        return bfs(root,k);
    }
};