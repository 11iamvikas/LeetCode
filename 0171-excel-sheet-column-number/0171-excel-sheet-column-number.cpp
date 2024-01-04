class Solution {
public:
    int titleToNumber(string s) {
        int result = 0;
        for(char c: s){
            int d = c - 'A'+1;
            result =  result*26 + d;
        }
        return result;
    }
};