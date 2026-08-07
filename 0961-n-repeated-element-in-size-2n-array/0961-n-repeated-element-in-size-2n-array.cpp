class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        //This approach uses the O(nlogn)
        // sort(nums.begin(),nums.end());
        // int n=nums.size()/2;
        // int count=1,result;
        // int prev=nums[0];
        // for(int i=1;i<nums.size();i++){
        //     if(prev==nums[i]){
        //         count++;
        //     }
        //     if(count==n){
        //         result=nums[i];
        //         break; 
        //     }
        //     prev=nums[i];
        // }
        // return result;

        //Optimal Approach 
        int n=nums.size();
        if(nums[0]==nums[1]) return nums[0];
        for(int i=2;i<n;i++){
            if(nums[i]==nums[i-1] || nums[i]==nums[i-2]) return nums[i];
        }
        return nums.back();
    }
};