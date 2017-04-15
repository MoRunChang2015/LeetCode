class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string ans, str;
        while (ss >> str) {
            int len = str.length();
            int l = 0, r = len - 1;
            while (l <= r) {
                char temp = str[l];
                str[l] = str[r];
                str[r] = temp;
                l++;
                r--;
            }
            if (ans == "")
                ans += str;
            else
                ans += " " + str;
        }
        return ans;
    }
};
