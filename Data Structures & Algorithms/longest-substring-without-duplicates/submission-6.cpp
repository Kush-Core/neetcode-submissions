class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        if (s.size() == 1) return 1;
        int max_len = 0;
        int left = 0;
        unordered_map<char, int> count_map;
        for (int right = 0; right < s.size(); right++) {
            count_map[s[right]]++;
            while (count_map[s[right]] > 1) {
                count_map[s[left]]--;
                left++;
            }
            int len = right - left + 1;
            max_len = max(len, max_len);
        }
        return max_len;
    }
};
