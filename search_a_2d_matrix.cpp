class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if(matrix.size()==0){
            return false;
        }
        if(matrix[0].size()==0){
            return false;
        }
        int row=matrix.size()-1;
        if(target<matrix[0][0]){
            return false;
        }
        for(int i=1;i<matrix.size();i++){
            if(target==matrix[i][0]){
                return true;
            }
            if(target<matrix[i][0]){
                row=i-1;
                break;
            }
        }
 
        for(int i=0;i<matrix[row].size();i++){
            if(target==matrix[row][i]){
         
                return true;
            }
        }
        return false;
    }
};