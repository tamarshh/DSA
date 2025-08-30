class Solution {
  public:
    bool canSplit(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>pref(n,0);
       int leftsum=0;
        for(int i=0;i<n;i++){
            leftsum+=arr[i];
        }
        
        int rightsum=0;
        
        for(int i=n-1;i>=0;i--){
           
           rightsum+=arr[i];
           leftsum-=arr[i];
           
           if(leftsum==rightsum) return true;
            
        }
        return false;
    }
};