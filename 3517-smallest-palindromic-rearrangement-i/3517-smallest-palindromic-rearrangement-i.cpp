class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        stack<string> st;
        vector<int> freq(26,0);
        for(char ch: s){
            freq[ch-'a']+=1;
        }
        string left="";
        string mid="";
        string right;
        for(int i=0;i<26;i++){
            // Put half of the occurrences in the left half
            left+=string(freq[i]/2,'a'+i);
            string temp=string(freq[i]/2,'a'+i);
            st.push(temp);
            //If odd frequency keep one character for the middle
            if(freq[i]%2==1){
                mid=char('a'+i);
            }
        }
        while(!st.empty()){
            right+=st.top();
            st.pop();
        }
        return left+mid+right;
    }
};