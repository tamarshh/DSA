class Solution {
public:
    vector<int> countBits(int n) {
        vector<int>ans(n+1);

        for(int i=0;i<=n;i++){
            int cnt=0;
            int x=i;

            while(x!=0){
                if((x&1)==1) 
                {
                    cnt++;
                }
                x>>=1;
            }
            ans[i]=cnt;

        }
        return ans;
        
    }
};