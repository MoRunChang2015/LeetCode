class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        unordered_map<char, int> m;
        for (int i =  0; i < s.length(); ++i) {
            ++m[s[i]];
            --m[t[i]];
        }
        for (auto& p : m)
            if (p.second != 0)
                return false;
        return true;
    }
};
