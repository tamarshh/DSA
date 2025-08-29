class Solution {
public:
int calcPalindrome(int num){
    int temp=num;
    long long int rev=0;
    while(temp!=0){
        int ld=temp%10;
         rev=rev*10+ld;
        temp/=10;
    }
return rev;

}
    bool isPalindrome(int x) {
        if(x<0) return false;
        int rev=calcPalindrome(x);
        if(rev==x) return true;

        return false;

        
    }
};