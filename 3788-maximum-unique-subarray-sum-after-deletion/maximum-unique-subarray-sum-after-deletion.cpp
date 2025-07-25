class Solution {
public:
    int maxSum(vector<int>& nums) {
        // vector<int>ans;
        // sort(nums.begin(),nums.end());
        // for(int i=1;i<nums.size();i++){
        //     if(nums[i]<=0){
        //         continue;
        //     }
        // }

        unordered_set<int>st;
        int maxNeg=INT_MIN;
        int sum=0;
        if(nums.size()==1) return nums[0];
        for(auto num:nums){
            if(num<=0){
                maxNeg=max(maxNeg,num);
            }
            else if(!st.count(num)){
                sum+=num;
                st.insert(num);
            }
        }
        return (sum==0?maxNeg:sum);

        
    }
};