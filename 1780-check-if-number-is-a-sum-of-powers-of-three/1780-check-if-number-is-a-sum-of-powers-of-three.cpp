class Solution {
public:
    bool greedySub(int n){
        vector<int> pow;
        for(long long p=1;p<=1e7;p*=3){
            pow.push_back(p);
        }
        for(int i=pow.size()-1;i>=0 && n>0;i--){
            if(pow[i]<=n){
                n-=pow[i];
            }
        }
        return n==0;
    }
    bool checkPowersOfThree(int n) {
        return greedySub(n);
    }
};