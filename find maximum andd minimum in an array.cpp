// User function Template for C++
class Solution {
  public:
    pair<int, int> getMinMax(vector<int> arr) {
        // code here

        int maxi=arr[0];
        int mini=arr[0];
        for(int i=0;i<arr.size();i++)
        {
            if(arr[i]<mini)
            {
                mini=arr[i];

            }
            if(arr[i]>maxi)
            {
                maxi=arr[i];

            }
        }
        return make_pair(mini,maxi);
    }
};
