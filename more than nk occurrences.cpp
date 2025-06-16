class Solution {
  public:
    // Function to find all elements in array that appear more than n/k times.
    int countOccurence(vector<int>& arr, int k) {
        // Your code here
        int n=arr.size();
    int ans=n/k;
    unordered_map<int,int> freq;
    for(auto nums:arr)
    {
        freq[nums]++;
    }
    unordered_set<int> printed;
    int count=0;
    for(auto nums:arr)
    {
        if(freq[nums]>ans && printed.find(nums)==printed.end())
        {
            count++;
            printed.insert(nums);
        }
    }
    return count;
    }
};
