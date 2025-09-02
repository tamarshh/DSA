class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>prefix(n,1);
        vector<int>suffix(n,1);
        vector<int> ans(n);

        prefix[0]=1;
        suffix[n-1]=1;

        // prefix product 
        for(int i=1;i<n;i++){
            prefix[i]=prefix[i-1]*nums[i-1];
        }

        // suffix product
        for(int i=n-2;i>=0;i--){
            suffix[i]=suffix[i+1]*nums[i+1];
        } 

        // calculating the ans

        for(int i=0;i<n;i++){
            ans[i]=suffix[i]*prefix[i];

        }
        return ans;

        
    }
};