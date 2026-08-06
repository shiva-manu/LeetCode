class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        unordered_map<int,int> map;
        for(int i=0;i<score.size();i++){
            map[score[i]]=i;
        }
        sort(score.begin(),score.end(),greater<int>());
        vector<string> result(score.size());
        if(score.size()>=1) result[map[score[0]]]="Gold Medal";
        if(score.size()>=2) result[map[score[1]]]="Silver Medal";
        if(score.size()>=3) result[map[score[2]]]="Bronze Medal";
        for(int i=3;i<score.size();i++){
            result[map[score[i]]]=to_string(i+1);
        }
        return result;
    }
};