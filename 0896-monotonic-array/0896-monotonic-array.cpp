class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        int prev=nums[0];
        bool IncreaseFlag=false;
        bool DecreaseFlag=false;
        for(int i=1;i<n;i++){
            if(prev<nums[i]){
                prev=nums[i];
                IncreaseFlag=true;
            }else if(prev>nums[i]){
                prev=nums[i];
                DecreaseFlag=true;
            }
        }
        if(IncreaseFlag && DecreaseFlag) return false;
        return true;
    }
};