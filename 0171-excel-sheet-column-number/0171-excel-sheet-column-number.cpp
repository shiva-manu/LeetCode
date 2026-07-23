class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ans=0;
        long long idx=1;
        for(char ch : columnTitle){
            ans=(ch-'A'+1)+ans*26;
        }
        return (int)ans;
    }
};