class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        int insert=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[insert]=nums[i];
                insert++;
            }
        }
        for(int i=insert;i<n;i++){
            nums[i]=0;
        }
    }
};