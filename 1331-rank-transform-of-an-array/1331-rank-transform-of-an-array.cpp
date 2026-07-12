class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int> mp;
        vector<int>  sorted=arr;
        vector<int> result;
        sort(sorted.begin(),sorted.end());
        int count=1;
        for(int num : sorted){
            if(!mp.count(num)){
                mp[num]=count++;
            }
        }
        for(int num: arr){
            result.push_back(mp[num]);
        }
        return result;
    }
};