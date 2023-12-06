class Solution {
public:
    int totalMoney(int n) {
        int ans =0;
        for(int i =0; i<n; i++){
            ans += (i/7)+1+(i%7);
        }
        return ans;
    }
};