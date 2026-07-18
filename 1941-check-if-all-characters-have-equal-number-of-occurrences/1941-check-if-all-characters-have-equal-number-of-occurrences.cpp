class Solution {
public:
    bool areOccurrencesEqual(string s) {
        vector<int> freq(26,0);
        for(char ch: s){
            freq[ch-'a']+=1;
        }
        char ch=s[0];
        int initial=freq[ch-'a'];
        for(int i=1;i<26;i++){
            if(freq[i]!=0 && initial!=freq[i]){
                return false;
            }
        }
        return true;
    }
};