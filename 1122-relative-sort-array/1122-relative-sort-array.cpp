class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        vector<int> hashMap(1001,0);
        for(int num: arr1){
            hashMap[num]+=1;
        }
        vector<int> result;
        for(int num: arr2){
            while(hashMap[num]>0){
                result.push_back(num);
                hashMap[num]--;
            }
        }
        vector<int> remaining;
        for(int num=0;num<=1000;num++){
            while(hashMap[num]>0){
                remaining.push_back(num);
                hashMap[num]--;
            }
        }
        sort(remaining.begin(),remaining.end());
        result.insert(result.end(),remaining.begin(),remaining.end());
        return result;
    }
};