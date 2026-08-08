class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> result(n);
        int idx=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0){
                result[idx]=nums[i];
                idx+=2;
            }
        }
        idx=1;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0){
                result[idx]=nums[i];
                idx+=2;
            }
        }
        return result;
    }
};