class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> pos;
        for (int i = 0; i < nums.size(); i++) {
            int needed = target-nums[i];
            auto it = pos.find(needed);
            if(it!=pos.end()){
                return {it->second,i};
            }
            pos[nums[i]]=i;
        }
        return {};
    }
};
