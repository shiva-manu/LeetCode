class Solution {
public:
    int arrangeCoins(int n) {
        int num=n;
        int count=1;
        while(num>=count){
            num-=count;
            count+=1;
        }
        return count-1;
    }
};