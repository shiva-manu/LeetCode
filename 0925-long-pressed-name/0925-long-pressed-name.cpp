class Solution {
public:
    //It's a wrong approach but solve 76 test cases out of 96
    // bool VectorWithFreq(string name,string typed){
    //     vector<int> name_freq(26,0);
    //     vector<int> typed_freq(26,0);
    //     for(char ch: name){
    //         name_freq[ch-'a']+=1;
    //     }
    //     for(char ch: typed){
    //         typed_freq[ch-'a']+=1;
    //     }
    //     for(int i=0;i<26;i++){
    //         if(name_freq[i]>typed_freq[i]){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    bool TwoPointer(string name,string typed){
        if(name.size()==typed.size()) return name==typed;
        int i=0,j=0;
        while(i<name.size() && j<typed.size()){
            if(name[i]==typed[j]){
                i++;
                j++;
            }else{
                if(j>0 && typed[j]==typed[j-1]) j++;
                else return false;
            }
        }
        if(i!=name.size()) return false;
        while(j<typed.size()){
            if(typed[j]!=typed[j-1]){
                return false;
            }
            j++;
        }
        return true;
    }
    bool isLongPressedName(string name, string typed) {
        return TwoPointer(name,typed);
    }
};