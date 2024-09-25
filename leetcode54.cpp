class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();

        int count = 0;
        int total_elements = row * col;
        vector<int> ans;

        // Index Initialization // 
        int starting_row = 0;
        int starting_col = 0;
        int ending_row = row - 1;
        int ending_col = col - 1;

        while (count < total_elements) {

            // Print starting row //
            for (int index = starting_col; index <= ending_col && count < total_elements ; index++) {
                ans.push_back(matrix[starting_row][index]);
                count++;
            }
            starting_row++;

            // Print the end column //
            for (int index = starting_row; index <= ending_row && count < total_elements; index++) {
                ans.push_back(matrix[index][ending_col]);
                count++;
            }
            ending_col--;

            // Print the ending row //
            for (int index = ending_col; index >= starting_col && count < total_elements; index--) {
                ans.push_back(matrix[ending_row][index]);
                count++;
            }
            ending_row--;

            // Print the starting column //
            for (int index = ending_row; index >= starting_row && count < total_elements; index--) {
                ans.push_back(matrix[index][starting_col]);
                count++;
            }
            starting_col++;
        }

        return ans;
    }
};
