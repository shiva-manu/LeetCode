class Solution {
public:
    int slideWindow(vector<int>& arr,int target){
        int n=arr.size();
        int i=0,j=0;
        int sum=0;
        vector<int> minBestLenTillIdx(n,INT_MAX);
        int bestMinLen=INT_MAX;
        int result=INT_MAX;
        vector<int> lengths;
        while(j<n){
            sum+=arr[j];
            while(i<=j && sum>target){
                sum-=arr[i];
                i++;
            }
            if(sum==target){
                int len=j-i+1;
                if(i>0 && minBestLenTillIdx[i-1]!=INT_MAX)
                result=min(result,len+minBestLenTillIdx[i-1]);

                bestMinLen=min(bestMinLen,len);
            }
            minBestLenTillIdx[j]=bestMinLen;
            j++;
        }
        return result==INT_MAX?-1:result;

    }
    int minSumOfLengths(vector<int>& arr, int target) {
        return slideWindow(arr,target);
    }
};