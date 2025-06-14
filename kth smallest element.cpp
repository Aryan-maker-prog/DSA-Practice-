#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int k;
    int arr[10]={1,9,8,7,6,5,4,3,2,0};
    cin>>k;
    sort(arr,arr+10);
   /* int count=0;

    for(int i=0;i<10;i++)
    {
        if(count==k)
        {
            cout<<arr[i];
        }
        else
        {
            count++;
        }
    }*/
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}
