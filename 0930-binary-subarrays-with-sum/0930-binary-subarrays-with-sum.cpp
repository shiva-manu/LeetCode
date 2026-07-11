class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        unordered_map<int,int> mp;
        int result=0;
        int cummSum=0;
        mp[0]=1; // I have seen CummSum=0 once
        for(int &num: nums){
            cummSum+=num;
            int remaining_sum=cummSum-goal;
            if(mp.find(remaining_sum)!=mp.end()){
                result+=mp[remaining_sum];
            }
            mp[cummSum]+=1;
        }
        return result;
    }
};