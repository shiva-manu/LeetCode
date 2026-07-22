class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int n=arr.size();
        int curr=arr[0],count=0;
        for(int i=1;i<n;i++){
            if(arr[i]>curr){
                count=0;
                curr=arr[i];
            }
            if(++count==k) break;
        }
        return curr;
    }
};