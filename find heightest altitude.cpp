class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int current=0;
        vector<int> altitude;
        altitude.push_back(current);
        for(int g:gain)
        {
            current=current+g;
            altitude.push_back(current);
        }
        int maxi=INT_MIN;
        for(int i=0;i<altitude.size();i++)
        {
            if(altitude[i]>maxi)
            {
                maxi=altitude[i];
            }
        }
        return maxi;
    }
};
