
class Solution {
  public:
    int celebrity(vector<vector<int> >& mat) {
        
        stack<int> st;
        int n=mat.size();
        int first=0;
        int second=0;
        for(int i=n-1;i>=0;i--){
            st.push(i);
        }
        
        while(st.size()>1){
            int first=st.top();
            st.pop();
            int second=st.top();
            st.pop();
            
            if(mat[first][second] ){
                st.push(second);
            }
            else {
                st.push(first);
            }
        
            
        }
        
        if(st.empty()) return -1;
        
        int candidate = st.top();

        for (int i = 0; i < n; i++) {
            if (i != candidate && (mat[candidate][i] || !mat[i][candidate])) {
                return -1;
            }
        }

        return candidate;
     
        
        // code here
        
    }
};

