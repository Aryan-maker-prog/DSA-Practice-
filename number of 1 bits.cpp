class Solution {
public:
    int hammingWeight(int n) {
       int count=1;
       while(n/2!=0)
       {
          int digit=n%2;
          if(digit==1)
          {
            count++;
          }
          n=n/2;
       }
       return count;
    }
};
