
bool isPalindrome(int x) {
    long ans=0;
    if(x<0)
    {
        return false;
    }
    int xcopy=x;
    if(x>0)
    {
        while(x!=0)
        {
            int digit=x%10;
            ans=ans*10+digit;
            x=x/10;
        }
    }
    return (ans==xcopy);
}
