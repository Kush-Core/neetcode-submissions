class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        for(int i =0;i<nums.size();i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int st = i+1,end=nums.size()-1;
            while(st<end){
                int sum = nums[i]+nums[st]+nums[end];
                if(sum==0){
                    ans.push_back({nums[i],nums[st],nums[end]});
                    st++;
                    end--;
                    while(nums[st]==nums[st-1] && st<end) st++;
                    while(nums[end]==nums[end+1] && st<end) end--;
                }
                else if(sum>0){
                    end--;
                }
                else st++;
                
            }
        }
        return ans;
    }
};
