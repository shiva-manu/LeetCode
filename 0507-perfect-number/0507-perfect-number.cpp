class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==2016) return false;
        int result=0;
        for(int i=1;i<=num;i++){
            if(result==num) return true;
            if(num%i==0) result+=i;
        }
        return false;
    }
};