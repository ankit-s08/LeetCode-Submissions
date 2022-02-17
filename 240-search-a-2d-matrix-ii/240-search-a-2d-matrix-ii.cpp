/*
int rows = matrix.size();
int columns = matrix[0].size();

starting from bottom left index
iterators : i = rows -1;        (bottom)
            j = 0;              (left)

approach: 
case 1: cureent element is equal to target
        if(matrix[i][j] == target)
        return true;
        
case 2: current element is less than target
        then target will lie in next columns but not in current column, so
        i++;
        
case 3: current element is greater than target
        target will lie in backward rows not in current row so
        j--;
        
perform these operations until i>=0 && j<colums
*/


class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        //lengths
        int rows = matrix.size();
        int cols = matrix[0].size();
        
        //starting from bottom left
        int i=rows-1;
        int j = 0;
        
        while(i>=0 && j<cols)
        {
            if(matrix[i][j] == target)
                return true;
            
            //target is present next columns
            else if(matrix[i][j] < target)
            {
                j++;
            }
            
            //target is present in backward rows
            else if(matrix[i][j] > target)
            {
                i--;
            }
        }
        
        return false;
        
    }
};