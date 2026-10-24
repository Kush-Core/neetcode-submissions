class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> m;

        for (auto& s : strs) {
            vector<int> freq(26, 0);
            string key = "";
            for (auto& c : s) {
                freq[c - 'a']++;
            }
            for (auto& points : freq) {
                key += to_string(points) + "#";
            }
            m[key].push_back(s);
            key = "";
        }
        vector<vector<string>> ans;
        for (auto& [k, value] : m) {
            ans.push_back(move(value));
        }
        return ans;
    }
};
