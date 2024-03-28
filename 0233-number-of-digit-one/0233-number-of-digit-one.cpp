class Solution {
public:
    int ans;
    int countDigitOne(int n) {
       long long t =1;
        for(int i =0; i<=9; i++){
            long long s =t;
            t *= 10;
            ans += s*(n/t)+min(max(n%t-s+1, 0ll), s);
        }
        return ans;
    }
};