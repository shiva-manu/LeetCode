class Solution {
public:
    int N,M,K;
    int MOD=1e9+7;
    int dp[51][51][101];
    int dpMemoization(int idx,int searchCost,int  maxCostSoFor){
        if(idx==N){
            if(searchCost==K) return 1;
            return 0;
        }
        if(dp[idx][searchCost][maxCostSoFor]!=-1) return dp[idx][searchCost][maxCostSoFor];
        int result=0;
        for(int i=1;i<=M;i++){
            if(i>maxCostSoFor){
                result=(result+dpMemoization(idx+1,searchCost+1,i))%MOD;
            }else{
                result=(result+dpMemoization(idx+1,searchCost,maxCostSoFor))%MOD;
            }
        }
        return dp[idx][searchCost][maxCostSoFor]=result%MOD;
    }
    int numOfArrays(int n, int m, int k) {
        memset(dp,-1,sizeof(dp));
        N=n;
        M=m;
        K=k;
        return dpMemoization(0,0,0);
    }
};