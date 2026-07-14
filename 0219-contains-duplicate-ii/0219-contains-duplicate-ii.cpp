class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_set<int> set;
        int i=0,j=0;
        while(j<n){
            if(j-i<=k){
                if(set.find(nums[j])!=set.end()){
                    return true;
                }else{
                    set.insert(nums[j]);
                    j++;
                }
            }else{
                set.erase(nums[i]);
                i++;
            }
        }
        return false;
    }
};