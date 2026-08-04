class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_map<int,int> map;
        for(int num: nums){
            map[num]+=1;
        }
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        sort(nums.begin(),nums.end());
        vector<int> result;
        for(int i=mn;i<=mx;i++){
            if(!map.count(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};