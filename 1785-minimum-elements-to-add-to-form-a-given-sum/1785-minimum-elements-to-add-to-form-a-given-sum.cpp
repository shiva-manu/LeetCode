class Solution {
public:
    int minElements(vector<int>& nums, int limit, int goal) {
        //Approach 1 brute force code little

        // long long sum=0;
        // int count=0;
        // for(int num : nums){
        //     sum+=num;
        // }
        // if(goal<0){
        //     sum+=abs(goal);
        //     while(sum>0){
        //         sum=sum-limit;
        //         count+=1;
        //     }
        // }else{
        //     sum=(abs((long long) goal-sum));
        //     while(sum>0){
        //         sum=sum-limit;
        //         count+=1;
        //     }
        // }
        // return count;

        long long sum=0;
        int count=0;
        for(int num: nums){
            sum+=num;
        }
        sum=abs(sum-goal);
        while(sum>0){
            sum-=limit;
            count+=1;
        }
        return count;
    }
};