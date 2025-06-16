class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    vector<bool> ans;
    int maxi=INT_MIN;
    int maxiIndex;
    for(int i=0;i<candies.size();i++)
    {
        if(candies[i]>maxi)
        {
            maxi=candies[i];
            maxiIndex=i;
        }
    }

    for(int i=0;i<candies.size();i++)
    {
        candies[i]=candies[i]+extraCandies;
    }
    for(int i=0;i<candies.size();i++)
    {
        if(candies[i]>=maxi)
        {
            ans.push_back(1);
        }
        else if(candies[i]<maxi)
        {
            ans.push_back(0);
        }
    }
    return ans;
    }
};
