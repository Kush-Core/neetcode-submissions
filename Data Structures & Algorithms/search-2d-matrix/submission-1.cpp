class Solution {
public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int rows = m.size();
        int cols = m[0].size();

        if (t < m[0][0] || t > m[rows - 1][cols - 1])
            return false;

        int row = 0;
        int col = cols - 1;

        while (row < rows) {

            if (t > m[row][col]) {
                row++;
                continue;
            }

            int st = 0, end = col;

            while (st <= end) {
                int mid = st + (end - st) / 2;

                if (m[row][mid] == t)
                    return true;

                if (m[row][mid] > t)
                    end = mid - 1;
                else
                    st = mid + 1;
            }

            row++;
        }

        return false;
    }
};