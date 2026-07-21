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
    int bfs(TreeNode* root){
        vector<int> result;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            TreeNode* temp=que.front();
            que.pop();
            result.push_back(temp->val);
            if(temp->left!=NULL) que.push(temp->left);
            if(temp->right!=NULL) que.push(temp->right);
        }
        int ans=INT_MAX;
        sort(result.begin(),result.end());
        for(int i=result.size()-2;i>=0;i--){
            ans=min(ans,result[i+1]-result[i]);
        }
        return ans;
    }
    int minDiffInBST(TreeNode* root) {
        return bfs(root);
    }
};