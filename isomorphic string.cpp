class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())
        {
            return false;
        }
        unordered_map<char,char>mapST;
        unordered_map<char,char>mapTS;
        for(int i=0;i<s.length();i++)
        {
            char chS=s[i];
            char chT=t[i];
            if((mapST.count(chS) && mapST[chS]!=chT)
              ||(mapTS.count(chT) && mapTS[chT]!=chS))
              {
                return false;
              }
              mapST[chS]=chT;
              mapTS[chT]=chS;
        }
        return true;
    }
};
