#include<numeric>
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        int n=nums.size();
        long long mx=1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long product=1LL*nums[i]*nums[j];
                long long numGcd=std::gcd(nums[i],nums[j]);
                long long strength=product/(numGcd*numGcd);
                mx=max(mx,strength);
            }
        }
        return mx;
    }
};