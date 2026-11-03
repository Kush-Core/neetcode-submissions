class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        vector<int> res(n, 0);
        stack<int> mono; // Stores indices

        for (int i = 0; i < n; i++) {
            while (!mono.empty() && t[i] > t[mono.top()]) {
                int prev = mono.top();
                mono.pop();
                res[prev] = i - prev;
            }

            mono.push(i);
        }

        return res;
    }
};