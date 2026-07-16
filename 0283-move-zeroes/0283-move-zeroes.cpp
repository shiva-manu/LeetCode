class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int ptr1=0,ptr2=0;
        while(ptr2<n){
            if(nums[ptr2]!=0){
                swap(nums[ptr2],nums[ptr1]);
                ptr1++;
            }
            ptr2++;
        }
    }
};