class Solution {
  public:
    int findUnion(vector<int>& a, vector<int>& b) {
        // code here
        unordered_map<int,int>freq;
        for(auto i:a)
        {
            freq[i]++;
        }
        for(auto j:b)
        {
            freq[j]++;
        }
        return freq.size();
    }
};
