class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int &num: nums){
            num=abs(num*num);
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};