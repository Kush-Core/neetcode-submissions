class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> pos;
        for (int i = 0; i < n; i++) {
            int sec = target-nums[i];
            if (pos.size() > 0 && pos.find(sec) != pos.end()) {
                return {pos[sec],i};
            }
            pos[nums[i]]=i;
        }
        return {};
    }
};
