class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        // code here
        vector<vector<int>>res(n);
        
        for(int i=0;i<n;i++){
             res[i]=vector<int>(i+1,1);
             
             for(int j=1;j<i;j++){
                 res[i][j]=res[i-1][j]+ res[i-1][j-1];
             }
        }
        return res[n-1];
        
    }
};
