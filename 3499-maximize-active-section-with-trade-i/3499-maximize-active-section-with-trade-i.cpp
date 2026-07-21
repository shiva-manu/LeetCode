class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n=s.size();
        vector<int> zeroCount;
        int count=0,oneCount=0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count+=1;
            }else{
                if(count>0) zeroCount.push_back(count);
                count=0;
                oneCount+=1;
            }
        }
        //Push the last zero back
        if(count>0) zeroCount.push_back(count);
        int maxi=0;
        for(int i=1;i<zeroCount.size();i++){
            maxi=max(maxi,zeroCount[i-1]+zeroCount[i]);
        }
        return oneCount+maxi;
    }
};

/*
small observations
adding the 1 on both sides



*/