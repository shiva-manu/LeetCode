class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int result=0;
        for(string str: operations){
            for(char ch: str){
                if(ch=='+'){
                    result++;
                    break;
                }else if(ch=='-'){
                    result--;
                    break;
                }
            }
        }
        return result;
    }
};