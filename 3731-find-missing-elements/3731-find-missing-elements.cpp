class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> set;
        int mn=INT_MAX,mx=INT_MIN;
        for(int num: nums){
            set.insert(num);
            mx=max(mx,num);
            mn=min(mn,num);
        }
        vector<int> result;
        for(int i=mn;i<=mx;i++){
            if(!set.count(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};