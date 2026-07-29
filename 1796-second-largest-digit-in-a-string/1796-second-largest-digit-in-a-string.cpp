class Solution {
public:
    int secondHighest(string s) {
        unordered_set<int> set;
        for(char ch : s){
            if(!isalpha(ch)){
                set.insert(ch-'0');
            }
        }
        int maxi1=-1,maxi2=-1;
        for(auto &it: set){
            if(it>maxi1){
                maxi2=maxi1;
                maxi1=it;
            }else if(it>maxi2){
                maxi2=it;
            }
        }
        return maxi2;
    }
};