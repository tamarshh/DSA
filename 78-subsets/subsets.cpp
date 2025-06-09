class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        int subsetCount = 1 << n; 
        vector<vector<int>> ans;

        for (int i = 0; i < subsetCount; i++) {
            vector<int> list;
            for (int j = 0; j < n; j++) {
                if (i & (1 << j)) {
                    list.push_back(nums[j]);
                }
            }
            ans.push_back(list);
        }
        return ans;
    }
};