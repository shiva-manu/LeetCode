class Solution {
public:
    int dp[501][501];
    int dpMemoization(vector<int>& piles,int i,int j){
        if(i>j) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        int take_ith=piles[i]+min(dpMemoization(piles,i+2,j),dpMemoization(piles,i+1,j-1));
        int take_jth=piles[j]+min(dpMemoization(piles,i+1,j-1),dpMemoization(piles,i,j-2));
        return dp[i][j]=max(take_ith,take_jth);
    }
    bool stoneGame(vector<int>& piles) {
        memset(dp,-1,sizeof(dp));
        int n=piles.size();
        int total=accumulate(piles.begin(),piles.end(),0);
        int alice=dpMemoization(piles,0,n-1);
        return alice>total-alice;
    }
};