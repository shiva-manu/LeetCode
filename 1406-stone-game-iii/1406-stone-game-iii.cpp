class Solution {
public:
    int n;
    int dp[50001];
    int dpMemoization(vector<int>& nums,int idx){
        if(idx>=n) return 0;
        if(dp[idx]!=-1) return dp[idx];
        int result=nums[idx]-dpMemoization(nums,idx+1);
        if(idx+1<n) result=max(result,nums[idx]+nums[idx+1]-dpMemoization(nums,idx+2));
        if(idx+2<n) result=max(result,nums[idx]+nums[idx+1]+nums[idx+2]-dpMemoization(nums,idx+3)); 
        return dp[idx]=result;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        memset(dp,-1,sizeof(dp));
        n=stoneValue.size();
        int result=dpMemoization(stoneValue,0);
        if(result==0) return "Tie";
        else if(result<0) return "Bob";
        else return "Alice";
    }
};