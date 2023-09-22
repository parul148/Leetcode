class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int rowIndex = 0;
        int colIndex = col -1;
        //int start = 0;
        //int end = row*col-1;
        //int mid =(start + end)/2;

        while(rowIndex < row && colIndex>=0){
            int element = matrix[rowIndex][colIndex];
            if(element == target){
                return true;
            }
            else if(element <target)
            {
                rowIndex++;
            }
            else{
                colIndex--;
            }
            //mid =(start + end)/2;
        }
        return false;

    }
};