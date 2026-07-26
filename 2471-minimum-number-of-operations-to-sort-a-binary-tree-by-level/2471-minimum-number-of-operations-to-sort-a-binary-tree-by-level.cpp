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
    int minNumberOfSwaps(vector<int>& result){
        int n=result.size();
        vector<pair<int,int>> arr;
        for(int i=0;i<result.size();i++){
            arr.push_back({result[i],i});
        }
        sort(arr.begin(),arr.end());
        vector<bool> vis(n,false);
        int swaps=0;
        for(int i=0;i<n;i++){
            if(vis[i] || arr[i].second==i) continue;
            int cycle=0;
            int j=i;
            while(!vis[j]){
                vis[j]=true;
                j=arr[j].second;
                cycle++;
            }
            swaps+=cycle-1;
        }
        return swaps;
    }
    int getSwapWithBSF(TreeNode* root){
        queue<TreeNode*> que;
        que.push(root);
        int ans=0;
        while(!que.empty()){
            int size=que.size();
            vector<int> result;
            while(size--){
                TreeNode* temp=que.front();
                que.pop();
                result.push_back(temp->val);
                if(temp->left) que.push(temp->left);
                if(temp->right) que.push(temp->right);
            }
            ans+=minNumberOfSwaps(result);
        }
        return ans;
    }
    int minimumOperations(TreeNode* root) {
        return getSwapWithBSF(root);
    }
};