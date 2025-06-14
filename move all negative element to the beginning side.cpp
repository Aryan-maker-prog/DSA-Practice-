#include<bits/stdc++.h>
using namespace std;
vector<int> move(vector<int> &arr)
{
    int j=0;
    for(int i=0;i<arr.size();i++)
    {
       if(arr[i]<0)
       {
           swap(arr[i],arr[j]);
           j++;
       }
    }
    return arr;
}
int main()
{
    vector<int> arr={-13,11,-2,8,-9,-8,3};
    vector<int> ans=move(arr);
    for(auto nums:ans)
    {
        cout<<nums<<" ";
    }
}
