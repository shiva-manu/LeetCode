class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set<char> hashSet(jewels.begin(),jewels.end());
        int count=0;
        for(char ch : stones){
            if(hashSet.count(ch)){
                count+=1;
            }
        }
        return count;
    }
};