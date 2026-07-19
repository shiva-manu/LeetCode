class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum=0;
        for(int num: nums){
            sum+=num;
        }
        int actualSum=0;
        for(int i=1;i<=nums.size();i++){
            actualSum+=i;
        }
        return actualSum-sum;
    }
};