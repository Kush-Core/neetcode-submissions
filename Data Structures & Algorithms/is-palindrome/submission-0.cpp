class Solution {
   public:
    bool isPalindrome(string s) {
        string s1 = "";
        for (auto& ch : s) {
            if (ch == ' ') continue;
            if (isalnum(ch)) s1 += tolower(ch);
        }
        int st = 0, end = s1.size() - 1;

        while (st < end) {
            if (s1[st] != s1[end]) {
                return false;
            }
            st++;
            end--;
        }
        return true;
    }
};
