class Solution {
  public:
    bool isPalinSent(string &s) {
        // code here
        
          string check;
        for (char ch : s)
        {
            if (isalnum(ch)) check += tolower(ch);
        }
        
        int left=0;
        int right=check.size()-1;
        
        while(left<right){
            // if(check[left]==' ')left++;
            // else if(check[right]==' ') right--;
            
            if(check[left]!=check[right]) return false;
            left++;
            right--;
            
        }
        return true;
        
    }
};