class Solution {
public:
    string intToRomanI(int num) {
        vector<string> thousands = {"", "M", "MM", "MMM"};
        vector<string> hundreds = {
            "", "C", "CC", "CCC", "CD",
            "D", "DC", "DCC", "DCCC", "CM"
        };
        vector<string> tens = {
            "", "X", "XX", "XXX", "XL",
            "L", "LX", "LXX", "LXXX", "XC"
        };
        vector<string> ones = {
            "", "I", "II", "III", "IV",
            "V", "VI", "VII", "VIII", "IX"
        };

        return thousands[num / 1000] +
               hundreds[(num % 1000) / 100] +
               tens[(num % 100) / 10] +
               ones[num % 10];
    }
    string getRoman(int num){
        unordered_map<int, string> map = {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        string result="";
        vector<int> values={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        for(int value: values){
            while(num>=value){
                result+=map[value];
                num-=value;
            }
        }
        return result;
    }
    string intToRoman(int num) {
        return intToRomanI(num);
    }
};