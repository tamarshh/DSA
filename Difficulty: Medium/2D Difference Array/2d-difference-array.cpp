class Solution {
  public:
    vector<vector<int>> applyDiff2D(vector<vector<int>>& mat,
                                    vector<vector<int>>& opr) {
                                        
       int n = mat.size(), m = mat[0].size();
        vector<vector<int>> temp(n, vector<int>(m, 0)); // Initialize difference matrix
        
        // Step 1: Mark the operations on the difference matrix
        for(vector<int> &x : opr) {
            int val = x[0], r1 = x[1], c1 = x[2], r2 = x[3], c2 = x[4];
            temp[r2][c2] += val; // Mark bottom-right corner
            
            if (r1 - 1 >= 0 && c1 - 1 >= 0)
                temp[r1-1][c1-1] += val; // Mark top-left corner (to balance subtraction)
            
            if (c1 - 1 >= 0)
                temp[r2][c1-1] -= val; // Subtract at left boundary
            
            if (r1 - 1 >= 0)
                temp[r1-1][c2] -= val; // Subtract at top boundary
        }
        
        // Step 2: Propagate differences from right to left
        for(int i = 0; i < n; ++i) {
            for(int j = m - 2; j >= 0; --j) {
                temp[i][j] += temp[i][j+1];
            }
        }
        
        // Step 3: Propagate differences from bottom to top
        for(int i = n - 2; i >= 0; --i) {
            for(int j = 0; j < m; ++j) {
                temp[i][j] += temp[i+1][j];
            }
        }
        
        // Step 4: Combine with the original matrix
        for(int i = 0; i < n; ++i) {
            for(int j = 0; j < m; ++j) {
                temp[i][j] += mat[i][j];
            }
        }
        
        return temp;
        // code here
        
    }
};