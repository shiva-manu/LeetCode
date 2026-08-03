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
    int dpButtonUp(vector<int>& nums){
        int n=nums.size();
        vector<int> t(n+1);
        for(int i=n-1;i>=0;i--){
            t[i]=nums[i]-t[i+1];
            if(i+1<n) t[i]=max(t[i],nums[i]+nums[i+1]-t[i+2]);
            if(i+2<n) t[i]=max(t[i],nums[i]+nums[i+1]+nums[i+2]-t[i+3]);
        }
        return t[0];
    }
    string stoneGameIII(vector<int>& stoneValue) {
        memset(dp,-1,sizeof(dp));
        n=stoneValue.size();
        int result=dpButtonUp(stoneValue);
        if(result==0) return "Tie";
        else if(result<0) return "Bob";
        else return "Alice";
    }
};