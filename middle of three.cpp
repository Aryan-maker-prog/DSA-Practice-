// User function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        // code here
        vector<int> ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        sort(ans.begin(),ans.end());
        int ans2;
        for(int i=0;i<ans.size();i++)
        {
            ans2=ans[1];
        }
        return ans2;
    }
};
