class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        int col[n], row[m];
        
        for(int i=0; i<n; i++) col[i]=1;
        for(int j=0; j<m; j++) row[j]=1;
        
        for(int i =0; i<m; i++){
        for(int j =0; j<n; j++){
            if(matrix[i][j]==0){
             row[i]=0;
             col[j]=0;
            }
        }  
        }
        for(int i =0; i<m; i++){
            for(int j=0; j<n;j++){
                if(row[i]==0 || col[j]==0){
                    matrix[i][j]=0;
                }
            }
        }
    }
};