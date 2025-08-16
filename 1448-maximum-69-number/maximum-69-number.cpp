class Solution {
public:
    int maximum69Number (int num) {

       std::string s = std::to_string(num);
        

        int i=0;
         while(i<s.size()){
            if(s[i]=='6') 
            {
                s[i]='9';
                break;
            }
            i++;

         }
         return std::stoi(s);
        
    }
};