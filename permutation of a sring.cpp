class Solution {
  private:
    void permute(string s,int st,int end,vector<string>& result)
    {
        if(st==end)
        {
            result.push_back(s);
            return;
        }
        unordered_set<char> used;
        for(int i=st;i<=end;i++)
        {
            if(used.find(s[i])!=used.end())
            {
                continue;
            }
            used.insert(s[i]);
            swap(s[st],s[i]);
            permute(s,st+1,end,result);
            swap(s[st],s[i]);
        }
    }
  public:
    vector<string> findPermutation(string &s) {
        // Code here there
        vector<string> result;
        int st=0;
        int end=s.length()-1;
        permute(s,st,end,result);
        sort(result.begin(),result.end());
        return result;
    }

};
