class Solution {
public:
    int maxFreqSum(string s) {
    //      unordered_map<char, int> mp1;
    //     unordered_map<char, int> mp2;
    //     string vowels="aeiou";

    //     for( auto ch :s){
    //         if(vowels.find(ch) != string::npos){
    //             mp1[ch]++;
    //         }
    //         else {
    //              mp2[ch]++;

    //         }
    //     }
    //    int maxi1 = 0;
    //     int maxi2 = 0;

    //     for( auto it :mp1){
    //         if(it.second>maxi1){
    //             maxi1=it.second;
    //         }
    //     }
    //     for( auto it :mp2){
    //         if(it.second>maxi2){
    //             maxi2=it.second;
    //         }
    //     }

    //     return maxi1+maxi2;
       


   
        unordered_map<char, int> freq;
        string vowels = "aeiou";

        int maxi1 = 0; // max vowel frequency
        int maxi2 = 0; // max consonant frequency

        for (char ch : s) {
            freq[ch]++;  // count frequency of character

            if (vowels.find(ch) != string::npos) {
                maxi1 = max(maxi1, freq[ch]); // update vowel max
            } else {
                maxi2 = max(maxi2, freq[ch]); // update consonant max
            }
        }

        return maxi1 + maxi2;
    }
};





  