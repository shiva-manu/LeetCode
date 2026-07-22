class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        int prev=nums[0];
        for(int i=1;i<n;i++){
            while(nums[i-1]>=nums[i]){
                count+=1;
                nums[i]+=1;
            }
        }
        return count;
    }
};