class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> ransomNote_freq(26,0);
        vector<int> magazine_freq(26,0);
        for(char ch: ransomNote){
            ransomNote_freq[ch-'a']+=1;
        }
        for(char ch: magazine){
            magazine_freq[ch-'a']+=1;
        }
        for(int i=0;i<26;i++){
            if(ransomNote_freq[i]>magazine_freq[i]){
                return false;
            }
        }
        return true;
    }
};