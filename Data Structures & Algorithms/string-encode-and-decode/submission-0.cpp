class Solution {
public:

    string encode(vector<string>& strs) {
        string en = "";

        for (auto& str : strs) {
            en += to_string(str.size());
            en += '#';
            en += str;
        }

        return en;
    }

    vector<string> decode(string s) {
        vector<string> ans;

        int i = 0;

        while (i < s.size()) {

            // Find the '#'
            int j = i;

            while (s[j] != '#') {
                j++;
            }

            // Convert length from string to integer
            int len = stoi(s.substr(i, j - i));

            // Start of actual string
            j++;

            // Extract exactly 'len' characters
            string each = s.substr(j, len);
            ans.push_back(each);

            // Move to next encoded string
            i = j + len;
        }

        return ans;
    }
};