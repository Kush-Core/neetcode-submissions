class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int>m;
        int n = nums.size();
        for(int i =0;i<n;i++){
            if(m.size()>0 && m.find(nums[i])!=m.end()){
                return true;
            }
            m[nums[i]]=i;
        }
        return false;
    }
};