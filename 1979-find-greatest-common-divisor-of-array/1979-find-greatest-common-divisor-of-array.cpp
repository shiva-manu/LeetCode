class Solution {
public:
    int getGCD(int small,int large){
        while(large!=0){
            int rem=small % large;
            small=large;
            large=rem;
        }
        return small;
    }
    int findGCD(vector<int>& nums) {
        int small=*min_element(nums.begin(),nums.end());
        int large=*max_element(nums.begin(),nums.end());
        return getGCD(small,large);
    }
};