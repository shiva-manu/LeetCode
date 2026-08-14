class Solution {
public:
    int hashMapAndSort(vector<int>& nums){
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
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int maxValue=-1,secondMax=-1,maxIdx=-1;
        for(int i=0;i<n;i++){
            if(nums[i]>maxValue){
                secondMax=maxValue;
                maxValue=nums[i];
                maxIdx=i;
            }else if(nums[i]>secondMax){
                secondMax=nums[i];
            }
        }
        if(2*secondMax>maxValue)return -1;
        return maxIdx;
    }
};