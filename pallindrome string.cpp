class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int st=0;
        int end=s.size()-1;
        bool flag;
        while(st<end)
        {
            if(s[st]!=s[end])
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
                st++;
                end--;
            }
        }
        if(flag)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};
