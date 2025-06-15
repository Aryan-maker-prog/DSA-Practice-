/*Complete the function below*/

class Solution {
  public:
    bool isPalinArray(vector<int> &arr) {
        // code here
        for(int i=0;i<arr.size();i++)
        {
            int num=arr[i];
            int temp=0;
            while(num!=0)
            {
                int digit=num%10;
                temp=(temp*10)+digit;
                num=num/10;
            }
            if(temp!=arr[i])
            {
                return false;
            }
        }
        return true;
    }
};
