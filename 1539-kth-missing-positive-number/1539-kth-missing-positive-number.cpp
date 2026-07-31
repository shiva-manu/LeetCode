class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int value=1,idx=0;
        int result=0;
        while(k){
            if(idx<arr.size() && value==arr[idx]){
                idx++;
            }else{
                k--;
                if(k==0) return value;
            }
            value+=1;
        }
        return value;
    }
};