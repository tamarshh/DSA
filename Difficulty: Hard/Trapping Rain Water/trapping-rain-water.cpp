class Solution {
  public:
    int maxWater(vector<int> &arr) {
        // code here
         vector<int> leftMax(arr.size(),0);
         vector<int> rightMax(arr.size(), 0);
         leftMax[0]=arr[0];
         for (int i=1; i<arr.size(); i++){
             leftMax[i]= max(leftMax[i-1], arr[i]);
         }
         rightMax[arr.size()-1]= arr[arr.size()-1];
         for (int i= arr.size()-2; i>=0; i--){
             rightMax[i]= max(rightMax[i+1], arr[i]);
         }
         int ans=0;
        for (int i=0; i<arr.size(); i++){
            int  water= min(leftMax[i], rightMax[i])- arr[i];
            if(water>0){
                ans= ans+ water;
            }
            
        }
        return ans;
    }
};