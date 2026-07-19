class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int> map;
        vector<string> result;
        for(string str: words){
            map[str]+=1;
        }
        vector<pair<string,int>> arr;
        for(auto &it: map){
            arr.push_back({it.first,it.second});
        }
        sort(arr.begin(),arr.end(),[](auto &a,auto &b){
            if(a.second==b.second)
            return a.first<b.first;   // lexicographically smaller first
            return a.second>b.second; // higher frequency first
        });
        for(int i=0;i<k;i++){
            result.push_back(arr[i].first);
        }
        return result;
    }
};