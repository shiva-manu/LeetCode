class Solution {
public:
    int minimumPushes(string word) {
        vector<int> alphabets(26,0);
        for(char ch: word){
            alphabets[ch-'a']+=1;
        }
        sort(alphabets.begin(),alphabets.end(),greater<int>());
        int result=0;
        for(int i=0;i<26;i++){
            int freq=alphabets[i];
            int press=i/8+1;
            result+=press*freq;
        }
        return result;
    }
};