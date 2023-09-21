class Solution {
public:
    bool isPalindrome(string s) {
        

        int n = s.size();
        int st = 0;
        int e = n - 1;

        while (st < e) {
            // Skip non-alphanumeric characters and convert to lowercase
            while (st < e && !isalnum(s[st])) {
                st++;
            }
            while (st < e && !isalnum(s[e])) {
                e--;
            }

            // Compare characters (ignoring case)
            if (tolower(s[st]) != tolower(s[e])) {
                return false;
            }

            st++;
            e--;
        }

        return true;
  
    }
};