class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1.size() < num2.size())
            return addStrings(num2, num1);
        int x;
        vector<int> v;
        v.resize(num1.size() + 2);
        for (int i = num1.size() - 1; i >= 0; --i)
            v[num1.size() - i - 1] = num1[i] - '0';

        for (int i = 0; i < num1.size(); ++i) {
            if (num2.size() >=  i + 1)
                x = v[i] + num2[num2.size() - i - 1] - '0';
            else
                x = v[i];
            v[i] = x % 10;
            v[i + 1] += x / 10;
        }
        while (v[v.size() - 1] == 0 && v.size() > 1)
            v.pop_back();
        string ans = "";
        for (int i = v.size() - 1; i >= 0; --i) {
            ans =  ans + to_string(v[i]);
        }
        return ans;
    }
};
