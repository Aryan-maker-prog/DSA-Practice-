class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(int arr:nums)
        {
            freq[arr]++;
        }
        int ans;
        for(auto arr:freq)
        {
            if(arr.second==1)
            {
                ans=arr.first;
            }
        }
        return ans;
    }
};
