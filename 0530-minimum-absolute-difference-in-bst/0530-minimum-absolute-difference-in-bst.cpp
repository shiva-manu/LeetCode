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
    int bfs(TreeNode *root){
        vector<int> arr;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty()){
            TreeNode *temp=que.front();
            arr.push_back(temp->val);
            que.pop();
            if(temp->left!=NULL) que.push(temp->left);
            if(temp->right!=NULL) que.push(temp->right);
        }
        sort(arr.begin(),arr.end());
        int ans=INT_MAX;
        for(int i=1;i<arr.size();i++){
            ans=min(ans,abs(arr[i-1]-arr[i]));
        }
        return ans;
    }
    int getMinimumDifference(TreeNode* root) {
        return bfs(root);
    }
};