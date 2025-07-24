class Solution {
public:
    int addDigits(int N) {
        if(N==0) return 0;
         return (N % 9 == 0) ? 9 : N % 9;
        
    }
};