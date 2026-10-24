class Solution {
   public:
    bool searchMatrix(vector<vector<int>>& m, int t) {
        int row = 0;
        int col = m[0].size()-1;
        if(t<m[0][0] || t>m[row][col]) return false;
        while (row <= m.size() - 1) {
            if (t > m[row][col]) {
                row++;
            }
            int st = 0, end = col;
            while (st <= end) {
                int mid = st + (end - st) / 2;
                if (m[row][mid] == t) return true;
                else if(m[row][mid]>t){
                    end=mid-1;
                }
                else{
                    st=mid+1;
                }
            }
        }
        return false;
    }
};
