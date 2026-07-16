class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
        for(int &num: nums){
            if(num==0){
                num=-1;
            }
        }
        vector<int> prefixSum(n+1,0);
        prefixSum[0]=nums[0];
        for(int i=1;i<=n;i++){
            prefixSum[i]=prefixSum[i-1]+nums[i-1];
        }
        unordered_map<int,int> mp;
        int maxi=0;
        for(int i=0;i<=n;i++){
            if(mp.find(prefixSum[i])!=mp.end()){
                maxi=max(maxi,i-mp[prefixSum[i]]);
            }else{
                mp[prefixSum[i]]=i;
            }
        }
        return maxi;
    }
};