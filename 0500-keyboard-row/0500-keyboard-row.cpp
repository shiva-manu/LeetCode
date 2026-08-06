class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> result;
        unordered_set<char> set1={'q','w','e','r','t','y','u','i','o','p'};
        unordered_set<char> set2={'a','s','d','f','g','h','j','k','l'};
        unordered_set<char> set3={'z','x','c','v','b','n','m'};
        for(string word: words){
            string lower="";
            for(char ch: word){
                lower+=tolower(ch);
            }
            char ch=lower[0];
            unordered_set<char> currSet;
            if(set1.count(ch)){
                currSet=set1;
            }else if(set2.count(ch)){
                currSet=set2;
            }else{
                currSet=set3;
            }
            bool flag=true;
            for(int i=0;i<lower.size();i++){
                if(!currSet.count(lower[i])){
                    flag=false;
                    break;
                }
            }
            if(flag){
                result.push_back(word);
            }
        }
        return result;
    }
};