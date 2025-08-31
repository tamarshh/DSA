class Solution {
public:
int getnext(int n){
    int temp=0;
    while(n!=0){
        int d=n%10;
        temp=d*d+temp;
        n/=10;
    }
    return temp;
}
    bool isHappy(int n) {
        int slow=n;
        int fast=getnext(n);

        while(fast!=1 && slow!=fast){
           
            slow=getnext(slow);
             fast=getnext(getnext(fast));
        }
        return fast==1;
        
    }
};