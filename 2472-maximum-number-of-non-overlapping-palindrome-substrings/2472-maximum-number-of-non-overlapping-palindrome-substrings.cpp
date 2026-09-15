class Solution {
public:
    int n;
    vector<vector<bool>> isPalindrome;
    int Memoization(string &s,int k,int i,int j,vector<vector<int>> &t,vector<vector<bool>>& isPalindrome){
        if(i>=n || j>=n) return 0;
        if(t[i][j]!=-1)return t[i][j];
        if(isPalindrome[i][j]){
            int take=1+Memoization(s,k,j+1,j+k,t,isPalindrome);
            int grow=Memoization(s,k,i,j+1,t,isPalindrome);
            int slide=Memoization(s,k,i+1,j+1,t,isPalindrome);
            return t[i][j]=max({take,grow,slide});
        }
        int grow=Memoization(s,k,i,j+1,t,isPalindrome);
        int slide=Memoization(s,k,i+1,j+1,t,isPalindrome);
        return t[i][j]=max(grow,slide);
    }
    int Tabulation(string s,int k){
        int n=s.length();
        if(k==1){
            return n;
        }
        isPalindrome.assign(n+1,vector<bool>(n+1,false));
        for(int L=1;L<=n;L++){
            for(int i=0;i+L<=n;i++){
                int j=i+L-1;
                if(i==j){
                    isPalindrome[i][j]=true;
                }else if(i+1==j){
                    isPalindrome[i][j]=(s[i]==s[j]);
                }else{
                    isPalindrome[i][j]=((s[i]==s[j]) && isPalindrome[i+1][j-1]);
                }
            }
        }
        vector<vector<int>> t(n+1,vector<int>(n+1));
        for(int i=n-1;i>=0;i--){
            for(int j=n-1;j>=0;j--){
                if(isPalindrome[i][j] && j-i+1>=k){
                    int take=1+(j+k<=n?t[j+1][j+k]:0);
                    int grow=t[i][j+1];
                    int slide=t[i+1][j+1];
                    t[i][j]=max({take,grow,slide});
                }
                int grow=t[i][j+1];
                int slide=t[i+1][j+1];
                t[i][j]=max({t[i][j],grow,slide});
            }
        }
        return t[0][n-1];
    }

    int maxPalindromes(string s, int k) {
        n=s.size();
        if(k==1) return n;
        vector<vector<int>> t(n+1,vector<int>(n+1,-1));
        isPalindrome.assign(n+1,vector<bool>(n+1,false));
        for(int L=1;L<=n;L++){
            for(int i=0;i+L<=n;i++){
                int j=i+L-1;
                if(i==j){
                    isPalindrome[i][j]=true;
                }else if(i+1==j){
                    isPalindrome[i][j]=(s[i]==s[j]);
                }else{
                    isPalindrome[i][j]=((s[i]==s[j]) && isPalindrome[i+1][j-1]);
                }
            }
        }
        return Memoization(s,k,0,k-1,t,isPalindrome);
    }
};