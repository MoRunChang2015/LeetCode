class Solution {
public:
    vector<string> findWords(vector<string>& words) {
       string line1("QWERTYUIOPqwertyuiop"), line2("ASDFGHJKLasdfghjkl"), line3("ZXCVBNMzxcvbnm");
       vector<string> v;
       string* pStr;
       for (auto& word : words) {
           if (line1.find(word[0]) != string::npos)
               pStr = &line1;
           else if (line2.find(word[0]) != string::npos)
               pStr = &line2;
           else if (line3.find(word[0]) != string::npos)
               pStr = &line3;
           bool flag = true;
           for (auto& c: word)
               if (pStr->find(c) == string::npos) {
                   flag = false;
                   break;   
               }
           if (flag)
               v.push_back(word);
       }
       return v;
    }
};
