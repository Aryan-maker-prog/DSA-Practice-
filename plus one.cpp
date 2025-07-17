class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(),digits.end());
        int carry=1;
        vector<int> nums;

        for(int i=0;i<digits.size();i++)
        {

            int ans=digits[i]+carry;
            nums.push_back(ans%10);
            carry=ans/10;

        }
        if(carry)
        {
            nums.push_back(carry);
        }
        reverse(nums.begin(),nums.end());
        return nums;
    }
};
