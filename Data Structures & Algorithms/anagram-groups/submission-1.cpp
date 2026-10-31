class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>hash_map;
        for(auto& st:strs){
            string hash_key="";
            vector<int>freq(26,0);
            for(auto& ch:st){
                freq[ch-'a']++;
            }
            for(auto& ch:freq){
                hash_key+='#';
                hash_key+=to_string(ch);
            }
            hash_map[hash_key].push_back(st);
        }
        vector<vector<string>>answer;
        for(auto& [key,values]:hash_map){
            answer.push_back(values);
        }
        return answer;
    }
};
