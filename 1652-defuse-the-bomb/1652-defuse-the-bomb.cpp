class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int> result;
        for(int i=0;i<n;i++){
            if(k>0){
                int sum=0;
                int j=(i+1)%n;
                int temp=k;
                while(temp--){
                    sum+=code[j];
                    j++;
                    j=j%n;
                }
                result.push_back(sum);
            }
            else{
                int sum=0;
                int j=(i-1+n)%n;
                int temp=-k;
                while(temp--){
                    sum+=code[j];
                    j=(j-1+n)%n;
                }
                result.push_back(sum);
            }
        }
        return result;
    }
};