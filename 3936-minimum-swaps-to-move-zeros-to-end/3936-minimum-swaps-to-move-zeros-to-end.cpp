class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n=nums.size();
        int left=0,right=n-1;
        int res=0;
        while(left<right){
            if(nums[left]==0){
                while(left<right && nums[right]==0) right--;
                if(left<right){
                    swap(nums[left],nums[right]);
                    right--;
                    res++;
                }
            }
            left++;
        }
        return res;
    }
};