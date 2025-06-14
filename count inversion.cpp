class Solution {
  public:
    // Function to count inversions in the array.
    int inversionCount(vector<int> &arr) {
        // Your Code Here
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                if(arr[i]>arr[j])
                {
                    count++;
                }
            }
        }
        return count;
    }
};
