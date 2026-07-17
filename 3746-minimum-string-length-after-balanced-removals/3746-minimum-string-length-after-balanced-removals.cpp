class Solution {
public:
    int minLengthAfterRemovals(string s) {
        if(s.size()==1) return 1;
        stack<int> st_a;
        stack<int> st_b;
        for(char ch: s){
            if(ch=='a'){
                st_a.push(ch);
            }else{
                st_b.push(ch);
            }
        }
        int a_size=st_a.size();
        int b_size=st_b.size();
        if(a_size>b_size){
            return a_size-b_size;
        }
        return b_size-a_size;
    }
};