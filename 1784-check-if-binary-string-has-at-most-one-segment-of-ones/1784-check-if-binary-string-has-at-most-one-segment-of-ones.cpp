class Solution {
public:
    bool checkOnesSegment(string s) {
        int count=0,segment=0;
        for(char ch : s){
            if(ch=='1'){
                count+=1;
            }else{
                if(count>0){
                    segment+=1;
                }
                count=0;
            }
        }
        if(count>0){
            segment+=1;
        }
        return segment==1?true:false;
    }
};