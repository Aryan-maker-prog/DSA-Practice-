// User function Template for C++

class Solution {
  public:
    int inSequence(int a, int b, int c) {
        // code here
        if(c==0)
        {
            return a==b?1:0;
        }
        if((b-a)%c==0 && (b-a)/c>=0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
};
