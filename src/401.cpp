class Solution {
public:
    vector<string> readBinaryWatch(int num) {
        vector<string> ans;
        for (int i = 0 ; i < 12; ++i)
            for (int j = 0; j < 60; ++j)
                if (count(i) + count(j) == num) {
                    string temp = to_string(i);
                    temp += ":";
                    if (j < 10)
                        temp += "0";
                    temp += to_string(j);
                    ans.push_back(temp);
                }
        return ans;
    }
    
private:
    int count(int n) {
        int ans = 0;
        while (n != 0) {
            n = n & (n - 1);
            ++ans;
        }
        return ans;
    }
};
