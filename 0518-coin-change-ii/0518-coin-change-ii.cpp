class Solution {
public:
    int n;
    int dp[301][5001];
    int dpMemoization(vector<int>& nums,int idx,int amount){
        if(amount==0) return 1;
        if(amount<0) return 0;
        if(idx==n) return 0;
        if(dp[idx][amount]!=-1) return dp[idx][amount];
        if(amount<nums[idx]) return dpMemoization(nums,idx+1,amount);
        int take=dpMemoization(nums,idx,amount-nums[idx]);
        int skip=dpMemoization(nums,idx+1,amount);
        return dp[idx][amount]=take+skip;
    }
    int change(int amount, vector<int>& coins) {
        memset(dp,-1,sizeof(dp));
        n=coins.size();
        return dpMemoization(coins,0,amount);
    }
};