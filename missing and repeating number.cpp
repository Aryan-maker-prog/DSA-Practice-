#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr={4, 3, 6, 2, 1, 1};
    unordered_map<int,int>freq;
    vector<int> ans;
    for(auto nums:arr)
    {
        freq[nums]++;
    }
    int ans2;
    for(auto nums:arr)
    {
        if(freq[nums]==2)
        {
            ans2=nums;
        }
    }
    int ans3;
    for(int i=1;i<=arr.size();i++)
    {
        if(freq.find(i)==freq.end())
        {
            ans3=i;
        }
    }
    ans.push_back(ans2);
    ans.push_back(ans3);
    cout<<"the duplicate and missing element in the given array is:";
    for(auto num:ans)
    {
        cout<<num<<" ";
    }
}
