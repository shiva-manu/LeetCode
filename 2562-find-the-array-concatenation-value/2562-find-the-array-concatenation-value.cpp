class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        int n=nums.size();
        long long result=0;
        int left=0,right=n-1;
        while(left<right){
            string con=to_string(nums[left])+to_string(nums[right]);
            result+=stoll(con);
            left++;
            right--;
        }
        if(left==right){
            result+=nums[left];
        }
        return result;
    }
};