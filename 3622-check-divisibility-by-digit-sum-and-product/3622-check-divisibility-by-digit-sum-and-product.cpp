class Solution {
public:
    bool checkDivisibility(int n) {
        int number=n;
        int sum=0,prod=1;
        while(n>0){
            int digit=n%10;
            sum+=digit;
            prod*=digit;
            n/=10;
        }
        if(number%(sum+prod)==0){
            return true;
        }
        return false;
    }
};