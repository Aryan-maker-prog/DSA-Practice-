class Solution {
public:
    string reverseVowels(string s) {
        vector<int> ans;
        vector<char> ans2;
        int i = 0;
        char ch;
        for (int i = 0; i < s.length(); i++) {
            ch = s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
                ans.push_back(i);
                ans2.push_back(ch);
            }
        }
        reverse(ans2.begin(), ans2.end());

        for (int i = 0; i < ans2.size(); i++) {
            s[ans[i]] = ans2[i];
        }
        return s;
    }
};
