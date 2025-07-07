class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        // code here
        unordered_map<int,bool>seen;

        vector<int> result;
        for(auto nums:arr)
        {
            if(seen[nums]==false)
            {
                result.push_back(nums);
                seen[nums]=true;
            }
        }
        if(result.size()==1)
        {
            return -1;
        }
       sort(result.begin(),result.end());
       for(int i=0;i<result.size()-1;i++)
       {
           return result[result.size()-2];
       }
    }
};
