class Solution {
public:
    //This is the greddy stratagy which can pass the 45/62 tastcases 
    bool getWinner(vector<int>&nums){
        int score1=0,score2=0;
        bool player1=true;
        int n=nums.size();
        int j=n-1;
        int i=0;
        while(i<=j){
            if(player1){
                if(nums[i]<nums[j]){
                    score1+=nums[j];
                    j--;
                }else{
                    score1+=nums[i];
                    i++;
                }
                player1=!player1;
            }else{
                if(nums[i]<nums[j]){
                    score2+=nums[j];
                    j--;
                }else{
                    score2+=nums[i];
                    i++;
                }
                player1=!player1;
            }
        }
        return score1>=score2;
    }
    int n;
    int dp[21][21];
    int dpMemoization(vector<int>&nums,int i,int j){
        if(i>j) return 0;
        if(i==j) return nums[i];
        if(dp[i][j]!=-1) return dp[i][j];
        int take_i=nums[i]+min(dpMemoization(nums,i+2,j),dpMemoization(nums,i+1,j-1));
        int take_j=nums[j]+min(dpMemoization(nums,i,j-2),dpMemoization(nums,i+1,j-1));
        return dp[i][j]=max(take_i,take_j);
    }
    bool predictTheWinner(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int total=accumulate(nums.begin(),nums.end(),0);
        n=nums.size();
        int person1=dpMemoization(nums,0,n-1);
        return person1>=total-person1;
    }
};