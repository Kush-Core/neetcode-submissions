class Solution {
public:
    bool helper(vector<int>& piles, int h, int mid) {
        long long hours = 0;

        for (int pile : piles) {
            hours += (pile + mid - 1) / mid;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int l = 1;
        int hi = *max_element(piles.begin(), piles.end());

        int ans = hi;

        while (l <= hi) {
            int mid = l + (hi - l) / 2;

            if (helper(piles, h, mid)) {
                ans = mid;
                hi = mid - 1;
            } else {
                l = mid + 1;
            }
        }

        return ans;
    }
};