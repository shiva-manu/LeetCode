class Solution {
public:
    bool checkZeroOnes(string s) {
        int maxones=0,maxzeros=0;
        int onescount=0,zeroscount=0;
        for(char ch : s){
            if(ch=='1'){
                onescount+=1;
                maxzeros=max(zeroscount,maxzeros);
                zeroscount=0;
            }else{
                zeroscount+=1;
                maxones=max(maxones,onescount);
                onescount=0;
            }
        }
        maxones=max(onescount,maxones);
        maxzeros=max(zeroscount,maxzeros);
        return maxones>maxzeros;
    }
};