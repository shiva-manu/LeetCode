class Solution {
public:
    bool backspaceCompare(string str, string t_str) {
        stack<char> s;
        stack<char> t;
        for(char ch: str){
            if(ch == '#'){
                if(!s.empty()){
                    s.pop();
                }
            }else{
                s.push(ch);
            }
        }
        for(char ch : t_str){
            if(ch == '#'){
                if(!t.empty()){
                    t.pop();
                }
            }else{
                t.push(ch);
            }
        }
        string s_res="";
        string t_res="";
        while(!s.empty() || !t.empty()){
            if(!s.empty()){
                s_res+=s.top();
                s.pop();
            }
            if(!t.empty()){
                t_res+=t.top();
                t.pop();
            }
        }
        return s_res==t_res;
    }
};