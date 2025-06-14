class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        // Your code goes here
        int size1=a.size();
        int size2=b.size();
        vector<int> merged;
        int i=0;
        int j=0;
        while(i<size1 && j<size2)
        {
            if(a[i]>b[j])
            {
                merged.push_back(b[j++]);
            }
            else
            {
                merged.push_back(a[i++]);
            }
        }
        while(i<size1)
        {
            merged.push_back(a[i++]);
        }
        while(j<size2)
        {
            merged.push_back(b[j++]);
        }
        if(merged.size()%2==0)
        {
            int mid=merged.size()/2;
            int ans=merged[mid-1]+merged[mid];
            double ans2=ans/2.0;
            return ans2;
        }
        else
        {
            int mid=merged.size()/2;
            double ans3=merged[mid];
            return ans3;
        }
    }

};
