class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;

        // 1. Insert all elements into an unordered set to remove duplicates and get O(1) lookups
        unordered_set<int> new_set(nums.begin(), nums.end());
        int max_len = 0;

        // 2. Iterate through the set
        for (const auto& num : new_set) {
            // Check if 'num' is the START of a consecutive sequence
            // If num - 1 exists, then 'num' is in the middle of a sequence, so skip it
            if (new_set.find(num - 1) == new_set.end()) {
                int current_num = num;
                int current_len = 1;

                // Expand the sequence forward
                while (new_set.find(current_num + 1) != new_set.end()) {
                    current_num += 1;
                    current_len += 1;
                }

                // Update the maximum length found so far
                max_len = max(max_len, current_len);
            }
        }

        return max_len;
    }
};
