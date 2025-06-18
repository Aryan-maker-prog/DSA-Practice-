#include<bits/stdc++.h>
using namespace std;
int getPivot(int arr[],int size)
{
    int st=0;
    int end=size-1;
    int mid=st+(end-st)/2;
    while(st<end)
    {
        if(arr[mid]>=arr[0])
        {
            st=mid+1;
        }
        else
        {
            end=mid;
        }
        mid=st+(end-st)/2;
    }
    return st;
}
int main()
{
    int arr[5]={3,8,10,1,2};
    int ans=getPivot(arr,5);
    cout<<"the pivot element in this given array is:"<<ans;
}
