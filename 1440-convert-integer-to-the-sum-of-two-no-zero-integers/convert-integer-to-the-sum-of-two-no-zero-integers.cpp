class Solution {
public:
bool check(int n){
    while(n!=0){
       if(n%10==0) return false;
       n=n/10;
    }
    return true;

}
    vector<int> getNoZeroIntegers(int n) {
        int a,b;
        for(int i=1;i<n;i++){
            a=i;
            b=n-i;

            if(check(a) && check(b)){
                break;
            }

            

        }
        return {a,b};
        
    }
};