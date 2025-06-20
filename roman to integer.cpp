// User function template for C++

class Solution {
    private:
    int romanToInteger(string &s)
    {
        unordered_map<char,int> roman={
            {'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}
        };
        int total=0;
        int n=s.length();
        for(int i=0;i<n;i++)
        {
            if(i+1<n && roman[s[i+1]]>roman[s[i]])
            {
                total+=roman[s[i+1]]-roman[s[i]];
                i++;
            }
            else
            {
                total+=roman[s[i]];
            }
        }
        return total;
    }
  public:
    int romanToDecimal(string &s) {
        // code here
        int ans=romanToInteger(s);
        return ans;
    }
};
