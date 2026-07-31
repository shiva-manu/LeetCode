class Solution {
public:
    //Approach one using the greedy method
    int greedy(vector<vector<int>> pairs){
        sort(pairs.begin(),pairs.end(),
        [](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int ans=1;
        int prev=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(prev<pairs[i][0]){
                prev=pairs[i][1];
                ans+=1;
            }
        }
        return ans;

    }
    int dp[1001][1001];
    int dpMemoization(vector<vector<int>>& pairs,int idx,int prevIdx){
        int take=0;
        if(idx==pairs.size()) return 0;
        if(prevIdx!=-1 && dp[prevIdx+1][idx]!=-1) return dp[prevIdx+1][idx];
        if(prevIdx==-1 || pairs[prevIdx][1]< pairs[idx][0]){
            take=1+dpMemoization(pairs,idx+1,idx);
        }
        int skip=dpMemoization(pairs,idx+1,prevIdx);
        return dp[prevIdx+1][idx]=max(take,skip);
    }
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end());
        memset(dp,-1,sizeof(dp));
        return dpMemoization(pairs,0,-1);
    }
};