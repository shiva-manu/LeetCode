class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
       int n = nums.size();
        // Frequency array for values 0..50
        int freq[51] = {0};
        
        // Iterate over every subarray of size k
        for (int i = 0; i <= n - k; i++) {
            bool seen[51] = {false};  // fixed-size array for values 0..50
            for (int j = i; j < i + k; j++) {
                seen[nums[j]] = true;
            }
            // For each number seen in this subarray, increase its count
            for (int x = 0; x <= 50; x++) {
                if (seen[x]) {
                    freq[x]++;
                }
            }
        }
        
        // Return the largest integer that appears in exactly one subarray
        for (int x = 50; x >= 0; x--) {
            if (freq[x] == 1) {
                return x;
            }
        }
        return -1;
    }
};