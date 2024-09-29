class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int row = matrix.size();
        int column = matrix[0].size();
        
        int start = 0;
        int end = row*column - 1;

        int mid = start + (end - start)/2; 

        while(end >= start){

            int element = matrix[mid/column][mid%column];

            if ( element == target) {
                return 1;
            }

            else if ( target > element) {
                start = mid + 1 ;
            }

            else {
                end = mid - 1;
            }

            mid = start + (end - start)/2; 
    
        }
    return 0;
    }
};