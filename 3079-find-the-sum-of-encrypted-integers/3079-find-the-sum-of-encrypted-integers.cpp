class Solution {
public:
    int sumOfEncryptedInt(vector<int>& nums) {
        int sum=0;
        for(int num: nums){
            int temp=num;
            int maxi=0;
            int digits=0;
            while(temp>0){
                int digit=temp%10;
                maxi=max(maxi,digit);
                temp/=10;
                digits++;
            }
            int encrypted=0;
            while(digits--){
                encrypted=encrypted*10+maxi;
            }
            sum+=encrypted;
        }
        return sum;
    }
};