void sortZeroesAndOne(int input[], int size)
{
    int st=0;
    int end=size-1;
    while(st<end)
    {
        while(input[st]==0  && st<end)
        {
            st++;
        }
        while(input[end]==1  && st<end)
        {
            end--;
        }
        if(input[st]==1 && input[end]==0 && st<end){
            swap(input[st++],input[end--]);
        }
    }
}
