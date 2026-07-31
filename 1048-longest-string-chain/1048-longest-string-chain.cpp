class Solution {
public:
    int n;
    static bool myFunction(string &word1,string &word2){
        return word1.size()<word2.size();
    }
    bool isPredecessor(string& prevString,string& currString){
        int m=prevString.size();
        int n=currString.size();
        if(n-m!=1 || m>=n) return false;
        int i=0,j=0;
        while(i<m && j<n){
            if(prevString[i]==currString[j]){
                i++;
            }
            j++;
        }
        return i==m;
    }
    int dp[1001][1001];
    int dpMemoization(vector<string>& words,int idx,int prevIdx){
        if(idx==n) return 0;
        int take=0;
        if(prevIdx!=-1 && dp[prevIdx+1][idx]!=-1) return dp[prevIdx+1][idx];
        if((prevIdx==-1) || (isPredecessor(words[prevIdx],words[idx])) ){
            take=1+dpMemoization(words,idx+1,idx);
        }
        int skip=dpMemoization(words,idx+1,prevIdx);
        return dp[prevIdx+1][idx]=max(take,skip);
    }
    int longestStrChain(vector<string>& words) {
        memset(dp,-1,sizeof(dp));
       n=words.size(); 
       sort(words.begin(),words.end(),myFunction);
       return dpMemoization(words,0,-1);
    }
};