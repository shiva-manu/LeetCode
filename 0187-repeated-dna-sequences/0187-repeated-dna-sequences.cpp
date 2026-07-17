class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
       int n=s.size();
       unordered_map<string,int> map;
       vector<string> result;
       int ptr1=0,ptr2=0;
       string curr="";
       while(ptr2<n){
        curr+=s[ptr2];
        if(curr.size()==10){
            map[curr]+=1;
            curr.erase(0,1);
            ptr1+=1;
        }
        ptr2+=1;
       }
       for(auto &it: map){
        if(it.second>=2){
            result.push_back(it.first);
        }
       }
       return result;
    }
};