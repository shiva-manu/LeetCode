class Solution {
public:
    int thirdMax(vector<int>& nums) {
        unordered_set<int> set;
        for(int num: nums){
            set.insert(num);
        }
        vector<int> result;
        for(auto &it: set){
            result.push_back(it);
        }
        sort(result.begin(),result.end());
        int n=result.size();
        if(n==1){
            return result[0];
        }else if(n==2){
            return result[1];
        }
        return result[n-3];
    }
};