string convertToKeypad(string s)
{
    string keypad[26]={
        "2", "22", "222",       // A, B, C
    "3", "33", "333",       // D, E, F
    "4", "44", "444",       // G, H, I
    "5", "55", "555",         // J, K, L
    "6", "66", "666",         // M, N, O
    "7", "77", "777", "7777", // P, Q, R, S
    "8", "88", "888",       // T, U, V
    "9", "99", "999", "9999"
    };
    string result="";
    for(auto ch:s)
    {
        if(ch==' ')
        {
            result=result+'0';
        }
        else
        {
            ch=toupper(ch);
            int index=ch-'A';
            if(index>=0 && index<26)
            {
                result=result+keypad[index];
            }
        }
    }
    return result;
}


string printSequence(string S) {
    // code here.
     string ans=convertToKeypad(S);
     return ans;
}
