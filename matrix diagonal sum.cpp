class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();

        for(int i=0;i<n;i++)
        {
            sum=sum+mat[i][i];
            sum=sum+mat[i][n-i-1];
        }
        if(n%2==1)
        {
            sum=sum-mat[n/2][n/2];
        }
        return sum;
    }
};
