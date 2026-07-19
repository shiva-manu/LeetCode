class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> map;
        //Count the frequencies
        for(char ch: s){
            map[ch]+=1;
        }
        vector<char> chars;
        for(auto &it: map){
            chars.push_back(it.first);
        }
        sort(chars.begin(),chars.end(),[&](char a,char b){
            return map[a]>map[b];
        });
        string result="";
        for(char ch: chars){
            result+=string(map[ch],ch);
        }
        return result;
    }
};