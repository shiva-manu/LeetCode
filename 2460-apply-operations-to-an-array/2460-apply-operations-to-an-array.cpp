class Solution {
public:
    vector<int> Approach1(vector<int>&nums){
        int n=nums.size();
        int prev=nums[0];
        for(int i=1;i<n;i++){
            if(prev==nums[i]){
                nums[i-1]=2*prev;
                nums[i]=0;
                prev=nums[i];
            }else{
                prev=nums[i];
            }
        }
        int left=0,right=1;
        while(right<n){
            if(nums[left]!=0){
            left++;
            if(right<left+1){
                right=left+1;
            }
            }else{
                while(right<n && nums[right]==0){
                    right++; 
                }
                if(right<n){
                    swap(nums[left],nums[right]);
                }
            }
        }
        return nums;
    }
    vector<int> applyOperations(vector<int>& nums) {
        return Approach1(nums);
    }
};