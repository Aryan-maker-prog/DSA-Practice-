class Solution {
  public:
    int minFlips(string S) {
        // your code here
        int flipsA=0;
        int flipsB=0;
        for(int i=0;i<S.length();i++)
        {
            char expectedA=(i%2==0)?'0':'1';
            char expectedB=(i%2==0)?'1':'0';
            if(S[i]!=expectedA)
            {
                flipsA++;
            }
            if(S[i]!=expectedB)
            {
                flipsB++;
            }
        }
        return min(flipsA,flipsB);

    }
};

