class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int rowBeg = 0, colBeg=0;
        int rowEnd = matrix.size()-1;
        int colEnd = matrix[0].size()-1;
        vector<int>ans;
        while(true){
            for(int j = colBeg;j<=colEnd;j++){
                ans.push_back(matrix[rowBeg][j]);
            }
            if(++rowBeg>rowEnd){
                break;
            }
            for(int i = rowBeg;i<=rowEnd;i++){
                ans.push_back(matrix[i][colEnd]);
            }
            if(--colEnd<colBeg){
                break;
            }
            for(int j=colEnd;j>=colBeg;j--){
                ans.push_back(matrix[rowEnd][j]);
            }
            if(--rowEnd<rowBeg){
                break;
            }
            for(int i=rowEnd;i>=rowBeg;i--){
                ans.push_back(matrix[i][colBeg]);
            }
            if(++colBeg>colEnd){
                break;
            }
        }
        return ans;

    }
};