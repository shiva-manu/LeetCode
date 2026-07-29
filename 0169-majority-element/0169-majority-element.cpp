class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int num=nums[0],count=0;
        for(int i=0;i<n;i++){
            if(num==nums[i]){
                count+=1;
            }else if(count==0){
                num=nums[i];
            }else{
                count-=1;
            }
        }
        return num;
    }
};