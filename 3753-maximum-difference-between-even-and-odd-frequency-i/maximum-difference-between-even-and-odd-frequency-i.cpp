class Solution {
public:
    int maxDifference(string s) {
        unordered_map<char,int>mpp;
        for(int i=0;i<s.size();i++){
            mpp[s[i]]++;
        }

        int odd=0;
        int even=100;
        for(auto it :mpp){
            if(it.second==0) continue;
            if(it.second%2==1){
                odd=max(it.second,odd);
            }
              if(it.second%2==0){
                even=min(it.second,even);
            }
        }
        return odd-even;
        
    }
};