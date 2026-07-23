class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        unordered_set<int> set(nums.begin(),nums.end());
        vector<int> result;
        for(int i=1;i<=n;i++){
            if(set.find(i)==set.end()){
                result.push_back(i);
            }
        }
        return result;
    }
};