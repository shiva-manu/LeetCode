class Solution {
public:
    int countSegments(string s) {
        int count=0,segments=0;
        for(char ch: s){
            if(ch!=' '){
                count+=1;
            }
            else{
                count=0;
            }
            if(count==1) segments+=1;
        }
        return segments;
    }
};