class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans(nums.size(), 1);
        int pref = 1;
        for (int i = 1; i < nums.size(); i++) {
            pref = pref * nums[i - 1];
            ans[i] = ans[i] * pref;
        }
        int suff = 1;
        for (int i = nums.size() - 2; i >= 0; i--) {
            suff = suff * nums[i+1];
            ans[i] = ans[i]*suff;
        }
        return ans;
    }
};
