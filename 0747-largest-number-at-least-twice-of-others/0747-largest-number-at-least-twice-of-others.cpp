class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        unordered_map<int,int> hashMap;
        int n=nums.size();
        for(int i=0;i<n;i++){
            hashMap[nums[i]]=i;
        }
        sort(nums.begin(),nums.end());
        int mx=nums[n-1];
        for(int i=0;i<n-1;i++){
            if(2*nums[i]>mx) return -1;
        }
        return hashMap[mx];
    }
};