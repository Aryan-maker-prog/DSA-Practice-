public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int row=accounts.size();
        int col=accounts[0].size();
        vector<int> ans;
        int lastRow=row-1;
        int lastCol=col-1;


        for(int j=0;j<=lastRow;j++)
        {
          int sum=0;
           for(int i=0;i<=lastCol;i++)
           {
             sum=sum+accounts[j][i];
           }
          ans.push_back(sum);
        }
        int maxi=INT_MIN;
        for(int i=0;i<ans.size();i++)
        {
           if(ans[i]>maxi)
           {
            maxi=ans[i];
           }
        }
        return maxi;
    }
};
