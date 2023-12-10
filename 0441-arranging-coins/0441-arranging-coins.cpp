class Solution {
public:
    int arrangeCoins(int n) {
        long long k = sqrt(2*(long long)n);
        long long sum = k*(k+1)/2;
        if(sum>n) return k-1;
        return k;
    }
};