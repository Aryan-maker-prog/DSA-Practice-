class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
       vector<int> even;
       vector<int> odd;
        for(int i=0;i<nums.size();i++)
        {
           if(nums[i]%2==0)
           {
              even.push_back(nums[i]);
           }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                odd.push_back(nums[i]);
            }
        }
        int n=nums.size();
       vector<int> result(n);
       for(int i=0;i<n;i+=2)
       {
          result[i]=even.back();
          even.pop_back();
       }
       for(int i=1;i<n;i+=2)
       {
          result[i]=odd.back();
          odd.pop_back();
       }
       return result;
    }
};
