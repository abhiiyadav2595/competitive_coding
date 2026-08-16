class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        vector<vector<int>> result;

        // Outer loop: move column by column
        for (int col = 0; col < n; col++) {

            vector<int> temp;

            // Inner loop: take elements from bottom to top
            for (int row = n - 1; row >= 0; row--) {
                temp.push_back(matrix[row][col]);
            }

            // Push the extracted array into result
            result.push_back(temp);
        }

        // Copy result back into matrix
        matrix = result;
    }
};