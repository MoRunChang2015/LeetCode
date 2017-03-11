class Solution {
public:
    string frequencySort(string s) {
        map<char, int> m;
        vector<string> v(s.size() + 1 , "");
        
        for (int i = 0; i < s.size(); ++i)
            ++m[s[i]];
            
        for (auto& x: m) {
            for (int i = 0; i < x.second; ++i)
                v[x.second] += x.first;
        }
        
        string ans;
        for (int i = s.size(); i >= 0; --i)
                ans += v[i];
        return ans;
    }
};
