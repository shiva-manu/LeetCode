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
    vector<int> result;
    void bfs(TreeNode* root){
        if(root==NULL) return;
        queue<TreeNode*> que;
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
    }
    bool findTarget(TreeNode* root, int k) {
        bfs(root);
        sort(result.begin(),result.end());
        int n=result.size();
        int left=0,right=n-1;
        while(left<right){
            if(result[left]+result[right]==k){
                return true;
            }else if(result[left]+result[right]>k){
                right--;
            }else{
                left++;
            }
        }
        return false;
    }
};