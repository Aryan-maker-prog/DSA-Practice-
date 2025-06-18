#include <bits/stdc++.h>
int firstOcc(vector<int>& arr,int n,int key)
{
    int st=0;
    int end=n;
    int ans=-1;
    int mid=st+(end-st)/2;
    while(st<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<key)
        {
            st=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=st+(end-st)/2;
    }
    return ans;
}
int lastOcc(vector<int>& arr,int n,int key)
{
    int st=0;
    int end=n-1;
    int ans=-1;
    int mid=st+(end-st)/2;
    while(st<=end)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            st=mid+1;
        }
        else if(arr[mid]<key)
        {
            st=mid+1;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        mid=st+(end-st)/2;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    pair<int,int> p;
    p.first=firstOcc(arr,n,k);
    p.second=lastOcc(arr,n,k);
    return p;
}
