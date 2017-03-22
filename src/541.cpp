class Solution {
public:
    string reverseStr(string s, int k) {
        bool flag = true;
        int i = 0, j;
        while (i < s.size()) {
            j = i + k;
            if (j > s.size())
                j = s.size();
            if (flag) {
                flag = false;
                for (int w = 0; w < (j - i) / 2; ++w)
                    swap(s[i + w], s[j - w - 1]);
            } else {
                flag = true;
            }
            i = j;
        }
        return s;
    }
};
