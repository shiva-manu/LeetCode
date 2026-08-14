class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int mn=27;
        for(char ch: letters){
            if(target<ch){
                mn=min(mn,ch-'a');
            }
        }
        if(mn==27) return letters[0];
        char result='a'+mn;
        return result;
    }
};