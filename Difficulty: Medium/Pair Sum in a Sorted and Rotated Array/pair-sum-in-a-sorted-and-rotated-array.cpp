// User function Template for C++

class Solution {
  public:
    bool pairInSortedRotated(vector<int>& arr, int target) {
        // code here
        int start=0;
        int end=arr.size()-1;
        sort(arr.begin(),arr.end());
        
        while(start<end){
            if(arr[start]+arr[end]<target) start++;
            else if(arr[start]+arr[end]>target)end--;
            else {
                return true;
            }
        }
        return false;
    }
};