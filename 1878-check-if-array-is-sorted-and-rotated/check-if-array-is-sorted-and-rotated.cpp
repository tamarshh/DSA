class Solution {
public:
void reverse(vector<int>&arr,int start,int end){
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
 void rotate(vector<int> &nums, int k) {
         if (nums.empty()) return;  
         k %= nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }


    bool check(vector<int>& nums) {
        vector<int> sorted=nums;
        sort(sorted.begin(),sorted.end());
        int k=0;
         for (int k = 0; k < nums.size(); k++) {
            vector<int> temp = sorted; // reset each time
            rotate(temp, k);
            if (temp == nums) return true;
        }
        return false;



       
        
    }
};