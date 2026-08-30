class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int mn=*min_element(nums.begin(),nums.end());
        int mx=*max_element(nums.begin(),nums.end());
        int n=nums.size();
        int idx1=0,idx2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mx){
                idx1=i;
                break;
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]==mn){
                idx2=i;
                break;
            }
        }
        int left=min(idx1,idx2);
        int right=max(idx1,idx2);
        int option1=right+1;
        int option2=n-left;
        int option3=(left+1)+(n-right);
        return min({option1,option2,option3});
    }
};