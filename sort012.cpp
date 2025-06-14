class Solution {
  private:
        int minimum(int st,int end,vector<int>& arr)
        {
            int mini=INT_MAX;
            for(int i=st;i<end;i++)
            {
                if(arr[i]<mini)
                {
                    swap(mini,arr[i]);
                }
            }
            return mini;
        }
  public:
    void sort012(vector<int>& arr) {
        // code here
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int ans=minimum(i,n,arr);
            arr[i]=ans;
        }
    }
};
