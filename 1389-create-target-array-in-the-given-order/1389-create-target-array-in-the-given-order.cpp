class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);         

            for (int j = ans.size() - 1; j > index[i]; j--) {
                ans[j] = ans[j - 1];
            }

            ans[index[i]] = nums[i];
        }

        return ans;
    }
};