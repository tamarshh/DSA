// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0;i<=arr.size()-1;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
            if(arr[i]>maxi) maxi=arr[i];
        }
        return {mini,maxi};
        
    }
};