class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.size();
        int left=0,right=n-1;
        while(left<right){
            while(left<right && !isalpha(s[right])){
                right--;
            }
            while(left<right && !isalpha(s[left])){
                left++;
            }
            swap(s[left],s[right]);
            right--;
            left++;
        }
        return s;
    }
};