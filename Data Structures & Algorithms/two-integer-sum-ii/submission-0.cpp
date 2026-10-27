class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int t) {
        int st =0,end=nums.size()-1;
        while(st<end){
            int sum = nums[st]+nums[end];
            if(sum == t) return {st+1,end+1};
            if(sum>t){
                end--;
            }
            else st++;
        }
    }
};
