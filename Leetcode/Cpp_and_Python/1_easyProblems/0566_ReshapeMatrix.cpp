class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int numOfRows, int numOfCols) 
    {
        if(numOfRows*numOfCols != mat.size()*mat[0].size()) {return mat;}
        vector<vector<int>> ans;
        int element = 0;
        for(int i = 0; i < numOfRows; i++)
        {
            vector<int> individualRow;
            for(int j = 0; j < numOfCols; j++)
            {
                individualRow.push_back(mat[element/mat[0].size()][element%mat[0].size()]);
                element++;
            }
            ans.push_back(individualRow);
        }
        return ans;
    }
};