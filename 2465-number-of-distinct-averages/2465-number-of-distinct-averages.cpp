class Solution {
public:
    int SortWithHashSet(vector<int>& nums){
        unordered_set<double> set;
        sort(nums.begin(),nums.end());
        int left=0,right=nums.size()-1;
        while(left<right){
            double average=(nums[left]+nums[right])/2.0;
            set.insert(average);
            left++;
            right--;
        }
        return set.size();
    }
    int distinctAverages(vector<int>& nums) {
        return SortWithHashSet(nums);
    }
};