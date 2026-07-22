class Solution {
public:
    int thirdMax(vector<int>& nums) {
        //Approach one using the hashset
        // unordered_set<int> set;
        // for(int num: nums){
        //     set.insert(num);
        // }
        // vector<int> result;
        // for(auto &it: set){
        //     result.push_back(it);
        // }
        // sort(result.begin(),result.end());
        // int n=result.size();
        // if(n==1){
        //     return result[0];
        // }else if(n==2){
        //     return result[1];
        // }
        // return result[n-3];

        //Approach two processing the array;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        reverse(nums.begin(),nums.end());
        int count=1;
        for(int i=1;i<n;i++){
            if(nums[i-1]==nums[i]) continue;
            count+=1;
            if(count==3) return nums[i];
        }
        return nums[0];
    }
};