class Solution {
  public:
    vector<int> spirallyTraverse(vector<vector<int> > &mat) {
        // code here
        vector<int> ans;
        int row=mat.size();
        int col=mat[0].size();
        int total=row*col;
        int firstRow=0;
        int firstCol=0;
        int lastRow=row-1;
        int lastCol=col-1;
        int count=0;
        while(count<total)
        {
           for(int i=firstCol;i<=lastCol && count<total ;i++)
           {
               ans.push_back(mat[firstRow][i]);
               count++;
           }
           firstRow++;
           for(int i=firstRow;i<=lastRow && count<total;i++)
           {
               ans.push_back(mat[i][lastCol]);
               count++;
           }
           lastCol--;
           for(int i=lastCol;i>=firstCol && count<total;i--)
           {
               ans.push_back(mat[lastRow][i]);
               count++;
           }
           lastRow--;
           for(int i=lastRow;i>=firstRow && count<total;i--)
           {
               ans.push_back(mat[i][firstCol]);
               count++;
           }
           firstCol++;
        }
        return ans;

    }
};
