class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++){
            int num=i;
            int result=num;
            int prod=1;
            while(num>0){
                int digit=num%10;
                prod*=digit;
                if(prod%t==0) return result;
                num=num/10;
            }
        }
        return -1;
    }
};