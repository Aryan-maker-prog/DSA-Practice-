class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
       int ans=pow(n,2)+n;
       int ans2=ans/2;
    int sum=0;
       for(int i=0;i<nums.size();i++)
       {
          sum=sum+nums[i];
       }
       return ans2-sum;
    }
};
