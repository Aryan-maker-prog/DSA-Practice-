
class Solution {
  public:
    // Function to check if two strings are rotations of each other or not.
    bool areRotations(string &s1, string &s2) {
        // Your code here
        int len1=s1.length();
        int len2=s2.length();
        string s3=s1+s1;
        int len3=s3.length();
        if(len1!=len2)
        {
            return false;
        }
        if(s1.empty())
        {
            return true;
        }
       if(s3.find(s2)!=string::npos)
       {
           return true;
       }
       else
       {
           return false;
       }

    }
};
