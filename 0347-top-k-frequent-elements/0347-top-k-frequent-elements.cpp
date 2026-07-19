class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        int n=nums.size();
        vector<int> result;
        for(int num: nums){
            map[num]+=1;
        }
        vector<pair<int,int>> arr;
        for(auto &it: map){
            arr.push_back({it.second,it.first});
        }
        sort(arr.begin(),arr.end());
        for(int i=arr.size()-1;i>=0 && k>0;i--){
            result.push_back(arr[i].second);
            k--;
        }
        return result;
    }
};