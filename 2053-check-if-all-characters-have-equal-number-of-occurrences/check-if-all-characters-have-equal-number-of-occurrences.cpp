class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char,int> freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }

       int cnt=freq[s[0]];

       for(auto it:freq){
        if(it.second!=cnt) return false;
       }
       return true;
        
    }
};