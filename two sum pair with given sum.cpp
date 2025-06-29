class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        // code here
        sort(arr.begin(),arr.end());
        int st=0;
        int end=arr.size()-1;
        bool ans=false;
        while(st<end)
        {
            if(arr[st]+arr[end]==target)
            {
                ans=true;
                break;
            }
            else if(arr[st]+arr[end]>target)
            {
                end--;
            }
            else if(arr[st]+arr[end]<target)
            {
               st++;
            }
        }
        return ans;
    }
};
