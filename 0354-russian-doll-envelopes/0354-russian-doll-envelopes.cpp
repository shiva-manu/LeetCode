class Solution {
public:
    int memoization(vector<vector<int>>&E,int idx,int prevIdx){
        if(idx==E.size()) return 0;
        int pick=0,notpick=0;
        if((prevIdx==-1) || (E[prevIdx][0]>E[idx][0] && E[prevIdx][1]>E[idx][1])){
            pick=1+memoization(E,idx+1,idx);
        }
        notpick=memoization(E,idx+1,prevIdx);
        return max(pick,notpick);
    }
    int patienceSorting(vector<vector<int>>& envelopes){
        vector<int>tails;
        for(auto& e: envelopes){
            auto it=lower_bound(tails.begin(),tails.end(),e[1]);
            if(it==tails.end()){
                tails.push_back(e[1]);
            }else{
                *it=e[1];
            }
        }
        return tails.size();
    }
    int maxEnvelopes(vector<vector<int>>& envelopes) {
        sort(envelopes.begin(),envelopes.end(),[](const vector<int>&a , const vector<int>&b){
            if(a[0]==b[0]){
                return a[1]>b[1];
            }else{
                return a[0]<b[0];
            }
        });
        return patienceSorting(envelopes);
    }
};