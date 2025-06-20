class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int row=matrix.size();
        int col=matrix[0].size();
        int firstRow=0;
        int firstCol=0;
        int lastRow=row;
        int lastCol=col;
        int mini=matrix[0][0];
         vector<int> ans;
        for(int i=0;i<row;i++)
        {
            int mini=INT_MAX;
            for(int j=0;j<col;j++)
            {
                mini=min(matrix[i][j],mini);
            }
            ans.push_back(mini);
        }

         vector<int> ans2;
        for(int  j=0;j<col;j++)
        {
           int maxi=INT_MIN;
           for(int i=0;i<row;i++)
           {
               maxi=max(matrix[i][j],maxi);
           }
           ans2.push_back(maxi);
        }
        unordered_map<int,int> freq;
        for(auto nums:ans)
        {
            freq[nums]++;
        }
        for(auto nums:ans2)
        {
            freq[nums]++;
        }
        vector<int> result;
        for(auto const& [nums,count]:freq)
        {
            if(count==2)
            {
                result.push_back(nums);
            }
        }

        return result;
    }
};
