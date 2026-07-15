class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        if(p.size()>s.size()) return {};
        vector<int> p_freq(26,0);
        vector<int> s_freq(26,0);
        vector<int> res;
        //Count frequencies of p and the first window of s
        for(int i=0;i<p.size();i++){
            p_freq[p[i]-'a']+=1;
            s_freq[s[i]-'a']+=1;
        }
        //Check the first window
        if(p_freq==s_freq){
            res.push_back(0);
        }
        int left=0;
        for(int right=p.size();right<s.size();right++){
            s_freq[s[right]-'a']+=1;
            s_freq[s[left]-'a']-=1;
            left++;
            if(s_freq==p_freq){
                res.push_back(left);
            }

        }
        return res;
    }
};