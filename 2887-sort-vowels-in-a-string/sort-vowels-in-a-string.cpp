class Solution {
public:

// bool isVowel(char ch){
//     if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
//         return true;
//     return false;
// }
// string sorting(string res){
//     sort(res.begin(),res.end());
//     return res;
// }

    string sortVowels(string str) {

//         string res;
//         int i=0;
//        while(i<str.size()){
//             if(isVowel(str[i])){
//                 res+=str[i];
//                 i++;
//             }else{
//                 i++;
//             }

//         }
//         string ans=sorting(res);
//         int j=0;
//         int k=0;
//         while(k<ans.size()){
//             if(isVowel(str[j])){
//                 swap(str[j],ans[k]);
//                 j++;
//                 k++;
//             }
//             else{
//                 j++;
//             }
//         }
//         return str;

        vector<int> upperCase(26,0);
        vector<int> lowerCase(26,0);
        string ans;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
                lowerCase[str[i]-'a']++;
                str[i]='#';
            }
            else if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
                upperCase[str[i]-'A']++;
                str[i]='#';
            }
            
        }
        string vowel;
         for(int i=0;i<26;i++){
            char c='A'+i;
            while(upperCase[i]){
                vowel+=c;
                upperCase[i]--;
            }
        }

        for(int i=0;i<26;i++){
            char c='a'+i;
            while(lowerCase[i]){
                vowel+=c;
                lowerCase[i]--;
            }
        }
   int l=0;
   int j=0;
   while(j<vowel.size()){
    if(str[l]=='#'){
        str[l]=vowel[j];
        j++;
    }
    l++;
   }
        return str;





            
    }
};