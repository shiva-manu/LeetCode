class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result="";
        for(string str: words){
            result+=str;
            if(result.size()==s.size() && result==s){
                return true;
            }
        }
        return false;
    }
};