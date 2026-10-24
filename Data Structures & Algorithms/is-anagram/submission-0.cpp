class Solution {
   public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char, int> m;
        for(char ch:s){
            m[ch]++;
        }
        for(char ch:t){
            m[ch]--;
        }
        for(auto i : m){
            if (i.second !=0){
                return false;
            }
        }
        return true;
    }
};
