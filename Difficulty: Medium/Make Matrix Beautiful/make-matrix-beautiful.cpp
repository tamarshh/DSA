class Solution {
  public:
    int balanceSums(vector<vector<int>>& mat) {
        // code here
        int n=mat.size();
        int maxsum=0;
        int opr=0;
        
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<n;j++){
                sum+=mat[i][j];
            }
             maxsum=max(maxsum,sum);
        }
        for(int j=0;j<n;j++){
            int sum=0;
            for(int i=0;i<n;i++){
                sum+=mat[i][j];
            }
             maxsum=max(maxsum,sum);
        }
        for(int j=0;j<n;j++){
            int rowsum=0;
            for(int i=0;i<n;i++){
                rowsum+=mat[i][j];
            }
             opr+=maxsum-rowsum;
        }
        return opr;
        
       
        
    }
};