class Solution {
public:
    string getHint(string secret, string guess) {
        unordered_map<char,int> map;
        for(int i=0;i<secret.size();i++){
            map[secret[i]]++;
        }
        int bulls=0,cows=0;
        for(int i=0;i<guess.size();i++){
            if(secret[i]==guess[i]){
                bulls+=1;
                map[secret[i]]-=1;
            }
        }
        for(int i=0;i<guess.size();i++){
            if(secret[i]!=guess[i] && map[guess[i]]>=1){
                cows+=1;
                map[guess[i]]-=1;
            }
        }
        string result=to_string(bulls)+"A"+to_string(cows)+"B";
        return result;
    }
};