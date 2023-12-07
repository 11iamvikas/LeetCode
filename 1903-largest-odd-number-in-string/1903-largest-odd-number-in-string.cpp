class Solution {
public:
    string largestOddNumber(string num) {
        int nl = num.size();
        int r;
        bool flag = false;
        for(int i =nl-1; i>=0; i--){
            if((num[i]-'0')&1){
                r=i;
                flag = true;
                break;
            }
        }
        if(flag){
            return num.substr(0,r+1);
        } else{
            return "";
        }
    }
};