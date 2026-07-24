class Solution {
public:
    vector<long long> mergeWithStack(vector<int>& nums){
        stack<long long> st;
        int n=nums.size();
        for(int i=0;i<n;i++){
            st.push(nums[i]);
            while(st.size()>=2){
                long long a=st.top();
                st.pop();
                long long b=st.top();
                st.pop();
                if(a==b) st.push(a+b);
                else{
                    st.push(b);
                    st.push(a);
                    break;
                }
            }
        }
        vector<long long> result;
        while(!st.empty()){
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
    vector<long long> mergeAdjacent(vector<int>& nums) {
        return mergeWithStack(nums);
    }
};