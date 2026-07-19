class Solution {
public:
    int missingNumber(vector<int>& nums) {
        //Easy Approach to solve this
        // int sum=0;
        // for(int num: nums){
        //     sum+=num;
        // }
        // int actualSum=0;
        // for(int i=1;i<=nums.size();i++){
        //     actualSum+=i;
        // }
        // return actualSum-sum;

        //Approach -2 using the binary search
        int low =0,high=nums.size()-1;
        sort(nums.begin(),nums.end());
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]==mid) low=mid+1;
            else high=mid-1;
        }
        return low;
    }
};