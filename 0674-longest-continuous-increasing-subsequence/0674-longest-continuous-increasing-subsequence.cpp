class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n=nums.size();
        int mx=0,count=0;
        int prev=nums[0];
        for(int i=1;i<n;i++){
            if(prev<nums[i]){
                count+=1;
                prev=nums[i];
            }else{
                mx=max(mx,count);
                prev=nums[i];
                count=0;
            }
        }
        mx=max(mx,count);
        return mx+1;
    }
};