
class Solution {
  public:
    int maximumProfit(vector<int> &arr) {
        // code here
         int maxProfit=0;
       for(int i=1;i<arr.size();i++){
           if(arr[i]>arr[i-1]) 
                maxProfit+=(arr[i]-arr[i-1]);
       }
        return maxProfit;
    }
};
