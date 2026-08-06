class Solution {
public:
    int dp[10001];
    int dpMemoization(vector<int>& nums,int idx,int n){
        if(idx==n-1) return 0;
        if(idx>=n) return 0;
        int ans=INT_MAX;
        if(dp[idx]!=-1) return dp[idx];
        for(int i=idx+1;i<=min(n-1,idx+nums[idx]);i++){
            int next=dpMemoization(nums,i,n);
            if(next!=INT_MAX) ans=min(ans,1+next);
        }
        return dp[idx]=ans;
    }
    int jump(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int n=nums.size();
        return dpMemoization(nums,0,n);
    }
};