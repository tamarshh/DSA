class Solution {
  public:
        int cnt=0;
    int towerOfHanoi(int n, int from, int to, int aux) {
  
         if(n==0){
           return cnt;
       }
        
        towerOfHanoi(n-1,from,aux,to);
        cnt++;
        towerOfHanoi(n-1,aux,to,from);
        
        return cnt;
        
        
    }
};