class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        for(auto ans:nums)
        {
            freq[ans]++;
            if(freq[ans]>nums.size()/2)
            {
                return ans;
            }
        }
        return -1;
    }
};
