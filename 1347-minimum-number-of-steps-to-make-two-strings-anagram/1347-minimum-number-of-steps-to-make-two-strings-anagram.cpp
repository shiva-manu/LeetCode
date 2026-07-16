class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> s_freq(26,0);
        vector<int> t_freq(26,0);
        for(int i=0;i<s.size();i++){
            s_freq[s[i]-'a']+=1;
            t_freq[t[i]-'a']+=1;
        }
        int sum=0;
        for(int i=0;i<26;i++){
            sum+=abs(s_freq[i]-t_freq[i]);
        }
        return sum/2;
    }
};