class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int n=s.size();
        string temp="";
        for(char ch: s){
            temp+=ch;
            if(temp.size()==n) return false;
            if(n%temp.size()==0){
                string repeated="";
                for(int i=0;i<n/temp.size();i++){
                    repeated+=temp;
                }
                if(repeated==s) return true;
            }
        }
        return false;
    }
};