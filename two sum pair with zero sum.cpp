// User function template for C++

class Solution {
  public:
    vector<vector<int>> getPairs(vector<int>& arr) {
        // code here
        vector<vector<int>>pairs;
        set<pair<int,int>>seen;
        sort(arr.begin(),arr.end());
        int st=0;
        int end=arr.size()-1;
        while(st<end)
        {
            if(arr[st]+arr[end]==0)
            {
               pair<int,int> p={arr[st],arr[end]};
               if(seen.find(p)==seen.end())
               {
                   pairs.push_back({arr[st],arr[end]});
                   seen.insert(p);
               }
                st++;
                end--;
            }
            if(arr[st]+arr[end]<0)
            {
                st++;
            }
            if(arr[st]+arr[end]>0)
            {
                end--;
            }
        }
        sort(pairs.begin(),pairs.end());
        return pairs;

    }
};
