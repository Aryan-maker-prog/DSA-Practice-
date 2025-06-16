class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int arr:nums)
        {
            freq[arr]++;
        }
        int ans;
        for(int arr:nums)
        {
            if(freq[arr]<2)
            {
                  ans=arr;
            }
        }
        return ans;
    }
};
