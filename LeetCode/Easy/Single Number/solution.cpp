class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        
        // Step 1: Sort the array so identical elements sit next to each other
        sort(nums.begin(), nums.end());
        
        // Step 2: Check elements in pairs (incrementing by 2)
        for (int i = 0; i < nums.size() - 1; i += 2) {
            // If a pair doesn't match, the first element of this pair is our single number
            if (nums[i] != nums[i+1]) {
                return nums[i];
            }
        }
        
        // Step 3: If all prior pairs matched, the single number is the last element
        return nums[nums.size() - 1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna