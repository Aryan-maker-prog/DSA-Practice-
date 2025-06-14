#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,3,4,5,6,89,7,5,3};
    int st=arr[0];
    int end=sizeof(arr);

    while(st<end)
    {
        swap(arr[st],arr[end]);
        st++;
        end--;
    }
    for(int i=0;i<10;i++)
    {
        cout<<arr[i];
    }
}
