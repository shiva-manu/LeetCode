class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }
        for(int j=0;j<arr.size();j++){
            if(arr[j]==0){
                if(map[arr[j]]>1) return true;
            }
            else if(map.count(2*arr[j])){
                return true;
            }
        }
        return false;
    }
};