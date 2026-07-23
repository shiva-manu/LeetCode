class Solution {
public:
    int n;
    int t[2501][2501];
    int dpMemo(vector<int> &nums,int i,int P){
        if(i==n) return 0;
        int take=0;
        if(P!=-1 && t[i][P]!=-1) return t[i][P];
        if(P==-1 || nums[P]<nums[i]){
            take=1+dpMemo(nums,i+1,i);
        }
        int skip=dpMemo(nums,i+1,P);
        if(P!=-1) return t[i][P]=max(take,skip);
        return max(take,skip);
    }
    int dpTab(vector<int>&nums){
        int n=nums.size();
        vector<int> t(n,1);
        int maxLIS=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    t[i]=max(t[i],t[j]+1);
                    maxLIS=max(maxLIS,t[i]);
                }
            }
        }
        return maxLIS;
    }
    int lengthOfLIS(vector<int>& nums) {
        // n=nums.size();
        // memset(t,-1,sizeof(t));
        return dpTab(nums);
    }
};