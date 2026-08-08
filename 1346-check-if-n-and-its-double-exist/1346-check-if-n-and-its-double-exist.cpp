class Solution {
public:
    bool HashMap(vector<int>& arr){
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
    bool HashSet(vector<int>& nums){
        unordered_set<int> hashSet;
        for(int num: nums){
            if(hashSet.count(2*num)) return true;
            if(num%2==0 && hashSet.count(num/2)) return true;
            hashSet.insert(num);
        }
        return false;
    }
    bool checkIfExist(vector<int>& arr) {
        return HashSet(arr);
    }
};