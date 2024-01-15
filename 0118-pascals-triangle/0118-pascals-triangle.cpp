class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i =0; i<numRows; i++){
           // i = 2 row-> [1,1];
           // i = 3 row-> [1,1,1];
            vector<int>v(i+1,1);
            for(int j=1; j<i; j++){
              //  current row ->i, previous row -> i-1;
                v[j] = ans[i-1][j] + ans[i-1][j-1];
            }
            ans.push_back(v);
        }
        return ans;
    }
};