#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[10];
    cin>>ch;
    unordered_map<char,int> freq;
    for(char nums:ch)
    {
        freq[nums]++;
    }
    for(auto nums:freq)
    {
        if(nums.second>1)
        {
            cout<<"['"<<nums.first<<"','"<<nums.second<<"']";
        }
    }
}
