// User function Template for C++

class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int ans=arr.size();
        int ans2=arr[ans-1];
        for(int i=ans-1;i>0;i--)
        {
           arr[i]=arr[i-1];
        }
        arr[0]=ans2;
    }
};
