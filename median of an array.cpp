class Solution {
  public:
    double findMedian(vector<int> &arr) {
        // code here.

        sort(arr.begin(),arr.end());
        int mid=arr.size()/2;
        if(arr.size()%2==0)
        {
             int ans=arr[mid-1]+arr[mid];
            float ans2=ans/2.0;
            return ans2;
        }
        else
        {
            return arr[mid];
        }
    }
};
