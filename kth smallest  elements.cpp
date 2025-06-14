// User function template for C++

class Solution {
    public:
      // arr : given array
      // k : find kth smallest element and return using this function
      int kthSmallest(vector<int> &arr, int k) {
          // code here
          sort(arr.begin(),arr.end());
          int count=1;
          for(int i=0;i<arr.size();i++)
          {
              if(count==k)
              {
                  return arr[i];
              }
              else
              {
                  count++;
              }
          }
      }
  };