class Solution {
  public:
  
  void markRow(int i, vector<vector<int>> &mat) {
    int cols = mat[0].size();
    for (int j = 0; j < cols; j++) {
        if (mat[i][j] != 0 && mat[i][j] != INT_MIN + 1)
            mat[i][j] = INT_MIN + 1;  
    }
}

void markCol(int j, vector<vector<int>> &mat) {
    int rows = mat.size();
    for (int i = 0; i < rows; i++) {
        if (mat[i][j] != 0 && mat[i][j] != INT_MIN + 1)
            mat[i][j] = INT_MIN + 1;
    }
}
    void setMatrixZeroes(vector<vector<int>> &mat) {
        // Brute force
        
          int rows = mat.size();               // Number of rows
          int cols = mat[0].size();  
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==0){
                    markRow(i,mat);
                    markCol(j,mat);
                }
            }
        }
        
        for(int i=0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==INT_MIN + 1){
                    mat[i][j]=0;
                }
            }
        }
    }
};