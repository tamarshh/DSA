class Solution {
public:
    int countHillValley(vector<int>& nums) {
        int i=0;
        int j=1;
        int cnt=0;
        while(j<nums.size()-1){
      
            if((nums[i]<nums[j] && nums[j]>nums[j+1])  || (nums[i]>nums[j] && nums[j]<nums[j+1])){
                cnt++;
                i=j;
               
            }
            j++;
           
            

        }
        return cnt;
        
    }
};