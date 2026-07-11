class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int result=0;

        //Approach-1
        // unordered_map<int,int> mp;
        // int cummSum=0;
        // mp[0]=1; // I have seen CummSum=0 once
        // for(int &num: nums){
        //     cummSum+=num;
        //     int remaining_sum=cummSum-goal;
        //     if(mp.find(remaining_sum)!=mp.end()){
        //         result+=mp[remaining_sum];
        //     }
        //     mp[cummSum]+=1;
        // }

        //Approach-2
        int window=0;
        int i=0,j=0;
        int count_zero=0;
        while(j<n){
            window+=nums[j];
            while(i<j && (nums[i]==0 || window>goal)){
                
                if(nums[i]==0){
                    count_zero+=1;
                }else{
                    count_zero=0;
                }
                window-=nums[i];
                i++;
            }
            if(window==goal){
                result+=1+count_zero;
            }
            j++;
        }
        return result;
    }
};