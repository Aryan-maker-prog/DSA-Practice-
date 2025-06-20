class Solution {
  public:
    int transform(string A, string B) {
        // code here.
        int len1=A.length();
        int len2=B.length();
        if(len1!=len2) return -1;
        unordered_map<char,int>m1,m2;
        for(auto nums:A) m1[nums]++;
        for(auto nums:B) m2[nums]++;
        if(m1!=m2) return -1;
        int i=len1-1;
        int j=len1-1;
        int ans=0;
        while(i>=0 &&j>=0)
        {
            while(i>=0 && A[i]!=B[j])
            {
                ans++;
                i--;
            }
            i--;
            j--;
        }
        return ans;

    }
};
