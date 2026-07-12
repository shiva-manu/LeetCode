class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> arr(n+1);
        int i2=1;
        int i3=1;
        int i5=1;
        arr[1]=1;
        int i2UglyNumber,i3UglyNumber,i5UglyNumber;
        for(int i=2;i<=n;i++){
            i2UglyNumber=2*arr[i2];
            i3UglyNumber=3*arr[i3];
            i5UglyNumber=5*arr[i5];
            int minUglyNumber=min({i2UglyNumber,i3UglyNumber,i5UglyNumber});
            arr[i]=minUglyNumber;
            if(minUglyNumber==i2UglyNumber) i2++;
            if(minUglyNumber==i3UglyNumber) i3++;
            if(minUglyNumber==i5UglyNumber) i5++;
        }
        return arr[n];
    }
};