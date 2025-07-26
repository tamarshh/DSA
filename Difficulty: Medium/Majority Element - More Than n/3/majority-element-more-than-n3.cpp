class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        // Code here
        int n=arr.size();
        unordered_map<int,int>mpp;
        vector<int>ans;
        for(int i=0;i<n;i++){
            mpp[arr[i]]++;
        }
        
        for(auto num:mpp){
            if(num.second>floor(n/3)){
                ans.push_back(num.first);
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};