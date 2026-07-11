class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        int left=0;
        while(left<n && nums[left]==sorted[left]) left++;
        int right=n-1;
        while(right>=left && nums[right]==sorted[right]) right--;
        return right-left+1;
    }
};