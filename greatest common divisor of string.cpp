class Solution {
    private:
    int gcd(int a,int b)
    {
        return b==0 ? a : gcd(b,a%b);
    }
public:
    string gcdOfStrings(string str1, string str2) {
    string ans1;
    string ans2;
    ans1=str1+str2;
    ans2=str2+str1;
    if(ans1!=ans2)
    {
        return "";
    }
    int ans=gcd(str1.length(),str2.length());
    string nums="";
    for(int i=0;i<ans;i++)
    {
        nums=nums+str1[i];
    }
    return nums;
    }
};
