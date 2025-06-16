class Solution {
  public:

    // Function to return length of longest subsequence of consecutive integers.
    int longestConsecutive(vector<int>& arr) {
        // Your code here
        sort(arr.begin(),arr.end());
        int ans=1;
        int len=1,n=arr.size();
        for(int i=0;i<n-1;i++)
        {
            if((arr[i]==arr[i+1]-1))
            {
                len++;
                ans=max(ans,len);
            }
            else if(arr[i]==arr[i+1])continue;
            else
            len=1;
        }
        return ans;
    }
};
