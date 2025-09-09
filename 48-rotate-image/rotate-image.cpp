class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
    //     vector<vector<int>> rotated(n, vector<int>(n, 0));  // new matrix for result

    //     // Build rotated matrix using your logic
    //     for (int col = 0; col < n; col++) {
    //         for (int row = n - 1; row >= 0; row--) {
    //             rotated[col][n - 1 - row] = matrix[row][col];
    //         }
    //     }

    //  // Copy rotated back into original (optional, if needed in-place style)
    //     matrix = rotated;


    // appraoch 2 -inplace 

    //1--->> transpose 

    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }


    // Reversing the values of rows 
     for(int i=0;i<n;i++){
        reverse(matrix[i].begin(),matrix[i].end());
     }
        
    }
};