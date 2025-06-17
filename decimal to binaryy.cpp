#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    vector<int> binary;
    cout<<"enter a decimal number:";
    cin>>num;
    while(num!=0)
    {
        int digit=num%2;
        binary.push_back(digit);
        num=num/2;
    }
    for(int i=binary.size()-1;i>=0;i--)
    {
        cout<<binary[i]<<" ";
    }
}

