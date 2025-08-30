class Solution {
  public:
    vector<int> prefSum(vector<int> &arr) {
        vector<int>prefix(arr.size());
        
        for(int i=0;i<arr.size();i++){
            prefix[i]=prefix[i-1]+arr[i];
            
        }
        return prefix;
        // code here
        
    }
};