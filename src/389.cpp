class Solution {
public:
    char findTheDifference(string s, string t) {
        int f[26] = {0};
        for (auto& c : s)
            ++f[c - 'a'];
        for (auto& c : t)
           if (f[c -'a'] == 0)
               return c;
           else
               --f[c - 'a'];
    }
};
