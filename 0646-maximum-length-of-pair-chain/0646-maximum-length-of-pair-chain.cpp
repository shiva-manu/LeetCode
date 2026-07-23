class Solution {
public:
    //Approach one using the greedy method
    int greedy(vector<vector<int>> pairs){
        sort(pairs.begin(),pairs.end(),
        [](vector<int>&a,vector<int>&b){
            return a[1]<b[1];
        });
        int ans=1;
        int prev=pairs[0][1];
        for(int i=1;i<pairs.size();i++){
            if(prev<pairs[i][0]){
                prev=pairs[i][1];
                ans+=1;
            }
        }
        return ans;

    }
    int findLongestChain(vector<vector<int>>& pairs) {
        return greedy(pairs);
    }
};