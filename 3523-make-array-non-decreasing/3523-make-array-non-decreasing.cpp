class Solution {
public:
    int maximumPossibleSize(vector<int>& nums) {
        stack<int> st;
        for(int num: nums){
            int curr=num;
            while(!st.empty() && st.top()>curr){
                curr=max(curr,st.top());
                st.pop();
            }
            st.push(curr);
        }
        return st.size();
    }
};