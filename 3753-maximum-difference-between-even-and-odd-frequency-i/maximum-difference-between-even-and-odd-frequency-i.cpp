class Solution {
public:
    int maxDifference(string s) {
        int ans;
        unordered_map<char,int>freq;
        for(int i=0;i<s.size();i++){
            freq[s[i]]++;
        }

        int odd=0;
        int even= INT_MAX;
        for(auto f: freq){
            if (f.second==0) continue;
            if (f.second&1) odd=max(f.second, odd);
            if ((f.second&1)==0) even=min(f.second, even);
        }
        return odd-even;
    }
};