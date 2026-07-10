class Solution {
public:
    string removeStars(string s) {
        string res="";
        res.reserve(s.size());
        for(char ch: s){
            if(ch=='*'){
                res.pop_back();
            }else{
                res+=ch;
            }
        }
        return res;
    }
};