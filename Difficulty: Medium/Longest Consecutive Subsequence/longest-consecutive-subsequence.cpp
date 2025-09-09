class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(), arr.end());
        int cnt = 1, maxi = 1;
        
        for(int i = 1; i < arr.size(); i++) {
            if(arr[i] == arr[i-1]) {
                // skip duplicates
                continue;
            }
            else if(arr[i] == arr[i-1] + 1) {
                // consecutive element
                cnt++;
            }
            else {
                // reset streak
                cnt = 1;
            }
            maxi = max(maxi, cnt);
        }
        
        return maxi;
    }
};