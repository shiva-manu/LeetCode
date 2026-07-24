class Solution {
public: 
    // Can be solved using the stack with pair datastructure with [char,count]
    string removeWithStack(string s,int k){
        stack<pair<char,int>> st;
        for(char ch: s){
            if(!st.empty() && st.top().first==ch){
                st.top().second++;
                if(st.top().second==k){
                    st.pop();
                }
            }else{
                st.push({ch,1});
            }
        }
        string result="";
        while(!st.empty()){
            auto [ch,count]=st.top();
            st.pop();
            result+=string(count,ch);
        }
        reverse(result.begin(),result.end());
        return result;

    }
    string removeDuplicates(string s, int k) {
        return removeWithStack(s,k);
    }
};