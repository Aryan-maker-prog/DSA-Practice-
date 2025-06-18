class Solution {
public:
    int mySqrt(int x) {
        int st=0;
        int end=x;
        long long int mid=st+(end-st)/2;
        long long int ans=-1;
        while(st<=end)
        {
            long long int square=mid*mid;
            if(square==x)
            {
                return mid;
            }
            else if(square>x)
            {
                end=mid-1;
            }
            else
            {
                ans=mid;
                st=mid+1;
            }
            mid=st+(end-st)/2;
        }
        return ans;
    }
};
