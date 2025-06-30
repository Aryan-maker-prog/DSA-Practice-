class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int mini=0;
        while(i<nums.size())
        {
            mini=min(nums[i],nums[i+1])+mini;
            i=i+2;
        }
        return mini;
    }
};
