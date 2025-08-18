class Solution {
public:
set<vector<int>> st;
void combination(vector<int>& arr,int idx,vector<vector<int>> &ans,vector<int>&temp,int target){
    int n=arr.size();
    if(target==0){
        if(st.find(temp)==st.end()){
         ans.push_back(temp);
          st.insert(temp);

    }
     return ;

    }
    
   
   
    if(idx==n ||target<0)return ;

    temp.push_back(arr[idx]);
    combination(arr,idx,ans,temp,target-arr[idx]);
    combination(arr,idx+1,ans,temp,target-arr[idx]);
    temp.pop_back();
    combination(arr,idx+1,ans,temp,target);
}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;

        combination(candidates,0,ans,temp,target);
        return ans;


        
    }
};