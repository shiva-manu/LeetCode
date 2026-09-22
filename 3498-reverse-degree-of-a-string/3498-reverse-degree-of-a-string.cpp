class Solution {
public:
    int reverseDegree(string s) {
        int n=s.size();
        int sum =0;
        vector<int> reverse(26);
        for(int i=0;i<26;i++){
            reverse[i]=26-i;
        }
        for(int i=0;i<n;i++){
            sum+=reverse[s[i]-'a']*(i+1);
        }
        return sum;

    }
};