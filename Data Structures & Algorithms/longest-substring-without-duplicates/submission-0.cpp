class Solution {
   public:
    int lengthOfLongestSubstring(string s) {
        vector<int> freq(256, -1);
        int left = 0, ans = 0;
        for (int right = 0; right < s.size(); right++) {
            unsigned char ch = s[right];
            if (freq[ch] >= left) {
                left = freq[ch] + 1;
            }
            freq[ch] = right;
            ans = max(ans, right - left + 1);
        }
        return ans;
    }
};
