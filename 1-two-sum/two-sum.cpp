class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int,int> mpp;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            int first=arr[i];
            int sec=tar-first;

            if(mpp.find(sec)!=mpp.end()){
               ans.push_back(i);
               ans.push_back(mpp[sec]);
            }
            mpp[first]=i;
        }
    return ans;
    }
};