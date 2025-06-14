// User function template for C++

class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        // code here
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int ans=arr[n-1]-arr[0];
        int largest=arr[n-1]-k;
        int smallest=arr[0]+k;
        int maxi=0;
        int mini=0;
        for(int i=0;i<n;i++)
        {
            maxi=max(largest,arr[i]+k);
            mini=min(smallest,arr[i+1]-k);
            if(mini<0)
            {
                continue;
            }
            ans=min(ans,(maxi-mini));
        }
        return ans;
    }
};
