class Solution {
public:
    long long getGCD(long long num,long long maxi){
        while(maxi!=0){
            long long rem=num % maxi;
            num=maxi;
            maxi=rem;
        }
        return num;
    }
    long long gcdSum(vector<int>& nums) {
        vector<long long> maxi;
        vector<long long> prefixGCD;
        long long maximum=0;
        for(int num:nums){
            maximum=max(maximum,(long long)num);
            maxi.push_back(maximum);
        }
        for(int i=0;i<nums.size();i++){
            prefixGCD.push_back(getGCD(nums[i],maxi[i]));
        }
        sort(prefixGCD.begin(),prefixGCD.end());
        int left=0,right=prefixGCD.size()-1;
        long long sum=0;
        while(left<right){
             sum+=getGCD(prefixGCD[left],prefixGCD[right]);
            left++;
            right--;
        }
        return sum;
    }
};