class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int row = matrix.size();            //number of rows
        int col = matrix[0].size();         //number of columns
               
        //indexes of 1-D array
        int start = 0;
        int end = row*col-1;
        int mid = start +(end - start)/2;
        
        while(start <= end)
        {
            //indexes of row and col 
            int mid_row = mid / col;        //middle element row index
            int mid_col = mid % col;        //middle element column index
            
            //target found
            if(target == matrix[mid_row][mid_col])
            {
                return true;
            }
            
            //target is in right part 
            else if(target > matrix[mid_row][mid_col])   //move right
            {
                start = mid + 1;
                
            }
            
            //target is in left part
            else                          //move left
            {
                end = mid -1;
            }
            
            mid = start + (end - start)/2;
        }
        return false;
    }
};