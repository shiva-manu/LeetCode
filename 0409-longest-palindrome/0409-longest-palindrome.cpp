class Solution {
public:
    int longestPalindrome(string s) {
        int n=s.size();
        int count=0;
        unordered_map<char,int> mp;
        for(char ch: s){
            mp[ch]+=1;
        }
        bool odd=false;
        for(const auto& [key,value]: mp){
            if(value % 2==0){
                count+=value;
            }else{
                count+=value-1;
                odd=true;
            }
        }
        return odd?count+1:count;
    }
};