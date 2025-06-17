class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here

    int n=arr.size()/2;
    unordered_map<int,int> freq;

    for(auto nums:arr)
    {
        freq[nums]++;
    }
    int ans=-1;
    for(auto nums:arr)
    {
        if(freq[nums]>n)
        {
            ans=nums;
        }
    }
   return ans;
    }
};
