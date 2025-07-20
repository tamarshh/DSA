class Solution {
public:
    int minMoves2(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int len=nums.size();
        int median= nums[len/2];
        int ans=0;

        for(int i=0;i<=nums.size()-1;i++){
            ans +=abs(median-nums[i]);
        }
        return ans;

        
    }
};