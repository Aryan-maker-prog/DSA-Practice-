class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();
        int count=n/3;
        unordered_map<int,int> freq;
        for(auto ans:nums)
        {
            freq[ans]++;
        }
        vector<int> arr;
        for(auto pair:freq)
        {
            if(pair.second>count)
            {
               arr.push_back(pair.first);
            }
        }
        return arr;
    }
};
