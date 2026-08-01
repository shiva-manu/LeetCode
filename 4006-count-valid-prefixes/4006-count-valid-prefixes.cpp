class Solution {
public:
    int countValidPrefixes(string s) {
        int oneCount=0,zeroCount=0;
        int ans=0;
        for(char ch: s){
            if(ch=='0') zeroCount+=1;
            else oneCount+=1;
            if(abs(zeroCount-oneCount)<=1) ans++;
        }
        return ans;
    }
};