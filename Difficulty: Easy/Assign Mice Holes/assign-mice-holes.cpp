class Solution {
  public:
    int assignHole(vector<int>& mices, vector<int>& holes) {
        sort(mices.begin(),mices.end());
        sort(holes.begin(),holes.end());
        vector<int>ans(mices.size(),0);
        for(int i=0;i<holes.size();i++){
            ans[i]=abs(mices[i]-holes[i]);
        }
        sort(ans.begin(),ans.end());
        return ans[ans.size()-1];
        
        
        // code here
        
    }
};