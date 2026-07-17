class Solution {
public:
    int maxBalancedShipments(vector<int>& weight) {
        stack<int> st;
        int maxi=0;
        int count=0;
        for(int num: weight){
            if(st.empty()){
                maxi=max(maxi,num);
                st.push(num);
            }else{
                if(maxi>num){
                    count+=1;
                    maxi=0;
                    while(!st.empty()){
                        st.pop();
                    }
                }else{
                    maxi=max(maxi,num);
                }               
            }
        }
        return count;
    }
};