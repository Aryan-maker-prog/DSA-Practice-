int minimum(vector<int>&arr,int st,int end)
{
    int mini=INT_MAX;
    int idx=st;
    for(int i=st;i<end;i++)
    {
        if(arr[i]<mini)
        {
            mini=arr[i];
            idx=i;
        }
    }
    return idx;
}
void selectionSort(vector<int>&arr) {
    vector<int> ans;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
       int minm=minimum(arr,i,n);
       swap(arr[minm],arr[i]);
    }
}
