class Solution {
public:
    int secondHighest(string s) {
        int maxi1=-1,maxi2=-1;
        for(char ch: s){
            if(!isalpha(ch)){
                if(ch-'0'>maxi1){
                    maxi2=maxi1;
                    maxi1=ch-'0';
                }else if( ch-'0'!=maxi1 && ch-'0'>maxi2){
                    maxi2=ch-'0';
                }
            }
        }
        return maxi2;
    }
};