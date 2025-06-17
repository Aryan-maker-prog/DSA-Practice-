#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter the binary form of the given number:";
    cin>>num;
    int i=0;
    int sum=0;
    while(num!=0)
    {
        int digit=num%10;
        sum=sum+pow(2,i)*digit;
        num=num/10;
        i++;
    }
    cout<<"the decimal number is:"<<sum;
}

