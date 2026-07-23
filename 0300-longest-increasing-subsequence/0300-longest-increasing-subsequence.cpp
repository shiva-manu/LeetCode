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
    int lengthOfLIS(vector<int>& nums) {
        n=nums.size();
        memset(t,-1,sizeof(t));
        return dpMemo(nums,0,-1);
    }
};