class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        // code here
        vector<int> ans;
        int i=0;
        int j=0;
        int k=0;
        
        while(i<a.size() && j<b.size()){
            if( a[i]<b[j]){
                if(ans.empty() || ans.back()!=a[i]){
                    ans.push_back(a[i]);
                   
                }
                i++;
            }
            else if( b[j]<a[i]){
                if(ans.empty() || ans.back()!=b[j]){
                    ans.push_back(b[j]);
                   
                }
                j++;
            }
            
            else {
                 if (ans.empty() || ans.back() != a[i]) {
                    ans.push_back(a[i]);
                }
                i++;
                j++;
            }
        }
        while(i<a.size()){
            if (ans.empty() || ans.back() != a[i]) {
                ans.push_back(a[i]);
            }
            i++;
        }
        while(j<b.size()){
              if (ans.empty() || ans.back() != b[j]) {
                ans.push_back(b[j]);
            }
            j++;
        }
        return ans;
    }
};