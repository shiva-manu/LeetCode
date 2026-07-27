class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        unordered_set<int> set;
        int n=candyType.size();
        for(int candy : candyType){
            set.insert(candy);
        }
        if(set.size()>n/2) return n/2;
        return set.size();
    }
};