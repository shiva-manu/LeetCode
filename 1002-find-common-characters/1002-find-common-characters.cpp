class Solution {
public:
    void fillCharacters(vector<int>& temp,string word){
        for(char ch: word){
            temp[ch-'a']+=1;
        }
    }
    vector<string> commonChars(vector<string>& words) {
        vector<int> count(26,0);
        fillCharacters(count,words[0]);
        vector<int> temp(26,0);
        for(int i=1;i<words.size();i++){
           vector<int> temp(26,0);
           fillCharacters(temp,words[i]);
           for(int i=0;i<26;i++){
            count[i]=min(count[i],temp[i]);
           } 
        }
        vector<string> result;
        for(int i=0;i<26;i++){
            int c=count[i];
            while(c--){
                result.push_back(string(1,i+'a'));
            }
        }
        return result;
    }
};