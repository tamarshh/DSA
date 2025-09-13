class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        
        int n=grid[0].size();
        unordered_map<int,int>mpp;

        for (auto &row : grid) {
            for (auto num : row) {
                mpp[num]++;
            }
        }
        vector<int>ans;
        for(auto it :mpp){
            if(it.second>1) ans.push_back(it.first);
        }

        for(int i=1;i<=n*n;i++){
             if(mpp.find(i)==mpp.end()){
                ans.push_back(i);

             }
        }

        return ans;

    }
};