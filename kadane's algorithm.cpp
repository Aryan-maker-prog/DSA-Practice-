class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        // Your code here
        int sum=0;
        int maxi=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            sum=sum+arr[i];
            maxi=max(sum,maxi);
            if(sum<0)
            {
                sum=0;
            }
        }
        return maxi;
    }
};
