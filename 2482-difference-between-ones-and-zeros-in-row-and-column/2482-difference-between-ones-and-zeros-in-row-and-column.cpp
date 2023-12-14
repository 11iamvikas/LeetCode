class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        unordered_map<int, int> r0, r1, c0, c1;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(grid[i][j] == 0)
                {
                    r0[i]+=1;
                    c0[j]+=1;
                }
                else{
                    r1[i]+=1;
                    c1[j]+=1;
                }
            }
        }
        vector<vector<int>> temp(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                temp[i][j] = (r1[i]+c1[j] - (r0[i]+c0[j]));
            }
        }
        return temp;
    }
};