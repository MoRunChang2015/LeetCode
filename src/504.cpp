class Solution {
public:
    string convertToBase7(int num) {
        bool flag = false;
        if (num < 0) {
            flag = true;
            num = -num;
        }
        string ans;
        if (num == 0)
            return "0";
        while (num != 0) {
            ans.push_back(num % 7 + '0');
            num = num / 7;
        }
        reverse(ans.begin(), ans.end());
        if (flag)
            ans = "-" + ans;
        return ans;
    }
};
