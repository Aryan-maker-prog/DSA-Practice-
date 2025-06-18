class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st=0;
        int end=arr.size()-1;
        int mid=st+(end-st)/2;
        while(st<end)
        {
            if(arr[mid]<arr[mid+1])
            {
                st=mid+1;
            }
            else
            {
                end=mid;
            }
            mid=st+(end-st)/2;
        }
        return mid;
    }
};
