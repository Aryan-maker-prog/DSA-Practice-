class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        vector<int> ans;
        int st1=0;
        int end1=arr.size()-1;
        int first=-1;
        while(st1<=end1)
        {
            int mid1=st1+(end1-st1)/2;
            if(arr[mid1]==x)
            {
                first=mid1;
                end1=mid1-1;
            }
            else if(arr[mid1]<x)
            {
                st1=mid1+1;
            }
            else
            {
                end1=mid1-1;
            }
        }
        int st=0;
        int end=arr.size()-1;
        int last=-1;
        while(st<=end)
        {
            int mid=st+(end-st)/2;
            if(arr[mid]==x)
            {
                last=mid;
                st=mid+1;
            }
            else if(arr[mid]<x)
            {
                st=mid+1;
            }
            else
            {
                end=mid-1;
            }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
