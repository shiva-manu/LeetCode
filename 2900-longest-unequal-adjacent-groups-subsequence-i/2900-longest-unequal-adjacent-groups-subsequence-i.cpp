class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=groups.size();
        vector<string> ans;
        int last=groups[0];
        ans.push_back(words[0]);
        for(int i=1;i<n;i++){
            if(groups[i]!=last){
                ans.push_back(words[i]);
                last=groups[i];
            }
        }
        return ans;
    }
};