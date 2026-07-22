class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // Two pass approach
        // int n=nums.size();
        // vector<int> result;
        // for(int i=0;i<n;i++){
        //     if(nums[i]%2==0){
        //         result.push_back(nums[i]);
        //     }
        // }
        // for(int i=0;i<n;i++){
        //     if(nums[i]%2!=0){
        //         result.push_back(nums[i]);
        //     }
        // }
        // return result;

        //One pass solution using the two pointer approach
        int n=nums.size();
        int left=0,right=0;
        while(right<n){
            if(nums[right]%2==0){
                swap(nums[right],nums[left]);
                left++;
            }
            right++;
        }
        return nums;
    }
};