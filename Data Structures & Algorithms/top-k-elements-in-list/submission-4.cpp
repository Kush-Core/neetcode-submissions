class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<vector<int>> freq_bucket(nums.size() + 1);
        vector<int> answer;
        unordered_map<int, int> buckets;
        int count = 0;
        for (auto& num : nums) {
            buckets[num]++;
        }

        for (auto& [num, freq] : buckets) {
            freq_bucket[freq].push_back(num);
        }

        for (int i = freq_bucket.size()-1; i >= 1; i--) {
            for (auto& num : freq_bucket[i]) {
                answer.push_back(num);
                count++;
                if (count == k) return answer;
            }
        }
        return answer;
    }
};
