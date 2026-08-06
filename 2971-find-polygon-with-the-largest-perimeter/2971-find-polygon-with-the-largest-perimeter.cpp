class Solution {
public:
    long long largestPerimeter(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        long long prefixSum=nums[0];
        long long ans=-1;
        for(int i=1;i<n;i++){
            if(prefixSum>nums[i]){
                ans=prefixSum+nums[i];
            }
            prefixSum+=nums[i];
        }
        return ans;
    }
};