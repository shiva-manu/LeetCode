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
    vector<int> bfs(TreeNode* root){
        queue<TreeNode*> que;
        unordered_map<int,int> map;
        que.push(root);
        while(!que.empty()){
            TreeNode* temp=que.front();
            map[temp->val]+=1;
            que.pop();
            if(temp->left!=NULL) que.push(temp->left);
            if(temp->right!=NULL) que.push(temp->right);
        }
        //Take the most occured value
        int maxi=0;
        for(auto &it: map){
            maxi=max(maxi,it.second);
        }
        vector<int> ans;
        for(auto &it: map){
            if(it.second==maxi){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
    vector<int> findMode(TreeNode* root) {
        if(root==NULL) return {0};
        return bfs(root);
    }
};