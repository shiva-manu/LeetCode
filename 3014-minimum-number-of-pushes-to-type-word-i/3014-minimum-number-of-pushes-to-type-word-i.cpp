class Solution {
public:
    int minimumPushes(string word) {
        unordered_map<int,int> map;
        int assignKey=2,result=0;
        for(char ch: word){
            if(assignKey>9){
                assignKey=2;
            }
            map[assignKey]+=1;
            result+=map[assignKey];
            assignKey+=1;
        }
        return result;
    }
};