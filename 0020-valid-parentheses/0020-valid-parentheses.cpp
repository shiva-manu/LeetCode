class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(int i=0;i<s.length();i++){
            char character=s[i];
            if(character=='(' || character=='{' || character=='['){
                st.push(s[i]);
            }else{
                if(st.size()==0) return false;
                if(st.top()=='(' && character==')' || st.top()=='{' && character=='}' || st.top()=='[' && character==']'){
                    st.pop();
                }else{
                    return false;
                }
            }
        }
        return st.size()==0;
    }
};