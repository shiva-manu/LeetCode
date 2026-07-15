class Solution {
public:
    int getGcd(int sumOdd,int sumEven){
        int small=min(sumOdd,sumEven);
        int gcd=1;
        for(int i=1;i<=small;i++){
            if(sumOdd%i==0 && sumEven%i==0){
                gcd=i;
            }
        }
        return gcd;
    }
    int gcdOfOddEvenSums(int n) {
        int sumOdd=0,sumEven=0;
        int num1=2,num2=1;
        for(int i=0;i<n;i++){
            sumOdd+=num2;
            num2+=2;
            sumEven+=num1;
            num1+=2;
        }
        return getGcd(sumOdd,sumEven);
    }
};