class Solution {
  public:
    int maxSubStr(string str) {
        // Write your code here
        int count0=0;
        int count1=0;
        int count=0;
        for(int i=0;i<str.length();i++)
        {
            if(str[i]=='0')
            {
                count0++;
            }
            else
            {
                count1++;
            }

            if(count1==count0)
            {
                count++;
            }
        }
        if(count1!=count0)
        {
            return -1;
        }
        else
        {
            return count;
        }
    }
};
