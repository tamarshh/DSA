class Solution {
public:
int maxOr=0;
int cnt=0;
int calcOr(vector<int>arr){
    int orval=arr[0];
    for(int i=1;i<arr.size();i++){
        orval|=arr[i];
    }
    return orval;

}
void subset(vector<int>&nums,int i,int orVal){
    if(i==nums.size()){
        if(orVal==maxOr){ 
             cnt++;
        } 
         return;
    }

    subset(nums,i+1,orVal|nums[i]);
    subset(nums,i+1,orVal);

}
    int countMaxOrSubsets(vector<int>& nums) {

    maxOr=calcOr(nums);

    subset(nums,0,0);
    return cnt;

        
    }
};