class Solution {
public:
    int M=1e9+7;
    int t[1001][1001];
    int Tabulation(int n,int K){
        //Base Case
        for(int i=0;i<=n-1;i++){
            t[0][i]=1;
        }
        for(int k=1;k<=K;k++){
            vector<int> prevRowSum(n+1,0);
            for(int x=n-1;x>=0;x--){
                prevRowSum[x]=(prevRowSum[x+1]+t[k-1][x])%M;
            }
            for(int i=n-1;i>=0;i--){
               int take=prevRowSum[i+1];
                int skip=t[k][i+1] % M;
                t[k][i]=(take+skip)%M;
            }
        }
        return t[K][0];
    }
    int Memoization(int n,int k,int i){
        if(k==0) return 1;
        if(i>=n) return 0;
        // Take the points 
        if(t[k][i]!=-1) return t[k][i];
        long long take=0;
        for(int j=i+1;j<=n-1;j++){
            take=(take+Memoization(n,k-1,j)) % M;
        }
        long long skip=Memoization(n,k,i+1) % M;
        return t[k][i]=(take+skip) % M;
    }
    int numberOfSets(int n, int k) {
        return Tabulation(n,k);
    }
};