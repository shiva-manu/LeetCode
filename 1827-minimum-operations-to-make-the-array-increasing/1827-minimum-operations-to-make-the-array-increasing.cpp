class Solution {
public:
    int minOperations(vector<int>& nums) {
        int count=0;
        int n=nums.size();
        //Approach 1 simulation(greedy approach)
        // for(int i=1;i<n;i++){
        //     if(nums[i-1]>=nums[i]){
        //         count+=1;
        //         nums[i]+=1;
        //     }
        // }

        //Greedy approach with optimization
        for(int i=1;i<n;i++){
            if(nums[i]<=nums[i-1]){
                int diff=nums[i-1]-nums[i]+1;
                count+=diff;
                nums[i]+=diff;
            }
        }
        return count;
    }
};