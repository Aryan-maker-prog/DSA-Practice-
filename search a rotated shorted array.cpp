#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr,int st1,int end1,int key)
{
    int st=st1;
    int end=end1;
    int mid=st+(end-st)/2;
    while(st<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>=key)
        {
            end=mid-1;
        }
        else{
            st=mid+1;
        }
    }
    return -1;
}
int getPivot(vector<int> arr,int size)
{
    int st=0;
    int end=size;
    int mid=st+(end-st)/2;
    while(st<=end)
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
    vector<int> arr={7,9,1,2,3};
    int key;
    cin>>key;
    int n=arr.size()-1;
    int pivot=getPivot(arr,n);
    if(arr[pivot]<=key && key<=arr[n])
    {
        cout<<binarySearch(arr,pivot,n,key);
    }
    else
    {
        cout<<binarySearch(arr,0,pivot-1,key);
    }
}

