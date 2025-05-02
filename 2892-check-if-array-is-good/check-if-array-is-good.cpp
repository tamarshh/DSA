class Solution {
public:
    bool isGood(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }

 if(mpp[nums.size()-1] != 2) return false;
    for(int i = 1; i < nums.size()-1; ++i){
        if(mpp[i] != 1) return false;
    }

        return true;

        
    }
};