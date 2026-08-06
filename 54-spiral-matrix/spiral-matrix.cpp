class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int row = matrix.size();
        int col = matrix[0].size();

        int startingrow = 0;
        int endingrow = row - 1;
        int startingcol = 0;
        int endingcol = col - 1;

        int count = 0;
        int total = row * col;

        while (count < total) {

            // left to right along startingrow
            for (int i = startingcol; count < total && i <= endingcol; i++) {
                ans.push_back(matrix[startingrow][i]);
                count++;
            }
            startingrow++;

            // top to bottom along endingcol
            for (int i = startingrow; count < total && i <= endingrow; i++) {
                ans.push_back(matrix[i][endingcol]);
                count++;
            }
            endingcol--;

            // right to left along endingrow
            for (int i = endingcol; count < total && i >= startingcol; i--) {
                ans.push_back(matrix[endingrow][i]);
                count++;
            }
            endingrow--;

            // bottom to top along startingcol
            for (int i = endingrow; count < total && i >= startingrow; i--) {
                ans.push_back(matrix[i][startingcol]);
                count++;
            }
            startingcol++;
        }

        return ans;
    }
};