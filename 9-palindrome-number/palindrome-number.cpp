class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        long rev=0;
        long dup=x;
        while(x!=0)
        {
           long ld=x%10;
       
           rev=rev*10+ ld;
           x=x/10;
        }
       return (rev==dup);
    }
};