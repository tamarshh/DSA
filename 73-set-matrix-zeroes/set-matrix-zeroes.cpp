class Solution {
  public:
    void setZeroes(vector<vector<int>> &mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        
        vector<bool> rowZero(rows, false);
        vector<bool> colZero(cols, false);

        // 1st pass: mark rows and cols to be zeroed
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (mat[i][j] == 0) {
                    rowZero[i] = true;
                    colZero[j] = true;
                }
            }
        }

        // 2nd pass: zero out cells
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (rowZero[i] || colZero[j]) {
                    mat[i][j] = 0;
                }
            }
        }
    }
};
