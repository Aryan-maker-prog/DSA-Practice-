class Solution {
public:
    bool isPalindrome(string s) {


        int left = 0;
        int right = s.length() - 1;

        while (left < right) {

            while (left < right &&
                  !((s[left] >= 'a' && s[left] <= 'z') ||
                    (s[left] >= 'A' && s[left] <= 'Z') ||
                    (s[left] >= '0' && s[left] <= '9'))) {
                left++;
            }


            while (left < right &&
                  !((s[right] >= 'a' && s[right] <= 'z') ||
                    (s[right] >= 'A' && s[right] <= 'Z') ||
                    (s[right] >= '0' && s[right] <= '9'))) {
                right--;
            }


            char c1 = s[left];
            char c2 = s[right];

            if (c1 >= 'A' && c1 <= 'Z') {
                c1 += 32;
            }

            if (c2 >= 'A' && c2 <= 'Z') {
                c2 += 32;
            }

            if (c1 != c2) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
