class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        int i=0;
        int j=0;
        if(s.size()!=t.size())
        {
            return 0;
        }
        bool ans;
        while(i<s.size() && j<t.size())
        {
            if(s[i]!=t[j])
            {
                return 0;
            }
            else if(s[i]==t[j])
            {
                ans=1;
                i++;
                j++;
            }
        }
        return ans;
    }
};
