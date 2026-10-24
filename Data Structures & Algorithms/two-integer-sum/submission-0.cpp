class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>m;
        int second=0;
        for(int i =0;i<nums.size();i++){
            second = target-nums[i];
            if(m.size()>0 && m.find(second)!=m.end()){
                return {m[second],i};
            }
            m[nums[i]]=i;
        }
        return {};
    }
};
