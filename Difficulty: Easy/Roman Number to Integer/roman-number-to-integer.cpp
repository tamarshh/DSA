// User function template for C++

class Solution {
  public:
     
       int numberValue(char ch){
        if(ch=='I') return 1;
        else if(ch=='V') return 5;
        else if(ch=='X') return 10;
        else if(ch=='L') return 50;
        else if(ch=='C') return 100;
        else if(ch=='D') return 500;
        else return 1000;
        }
    int romanToDecimal(string &s) {
        
             int sum=0;
        int i=0;

       while(i<s.size()-1){
            if(numberValue(s[i])< numberValue(s[i+1])){
                sum-=numberValue(s[i]);

            }
            else{
                sum+=numberValue(s[i]);
            }
            i++;
        }
        sum+=numberValue(s[i]);
        return sum;
        // code here
    }
};
