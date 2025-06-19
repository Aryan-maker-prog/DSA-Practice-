class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> freq;
        for(auto nums:s)
        {
            freq[nums]++;
        }
        char ans;
        for(auto nums:s)
        {
            if(freq[nums]==1)
            {
                ans=nums;
                break;
            }
        }
        int ans2=-1;
        for(int i=0;i<s.length();i++)
        {
            if(ans==s[i])
            {
                 ans2=i;
            }
        }
        return ans2;
    }
};
