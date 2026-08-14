class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char,int> hashMap;
        int n=s.size();
        int i=0,j=0;
        int mx=0,length=0;
        while(j<n){
            hashMap[s[j]]+=1;
            while(hashMap[s[j]]>2){
                hashMap[s[i]]-=1;
                i++;
            }
            mx=max(mx,j-i+1);
            j++;
        }
        return mx;
    }
};