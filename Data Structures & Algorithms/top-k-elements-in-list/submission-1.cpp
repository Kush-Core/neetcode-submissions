class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>freq;
        for(auto num:nums){
            freq[num]++;
        }
        vector<vector<int>>buckets(nums.size()+1);
        for(auto [num,f]:freq){
            buckets[f].push_back(num);
        }
        vector<int>result;
        for(int i = buckets.size()-1;i>=1;i--){
            for(int n:buckets[i]){
                result.push_back(n);
                if(result.size()==k) return result;
            }
        }
        return result;
    }
};
