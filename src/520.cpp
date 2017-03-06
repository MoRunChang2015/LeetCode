class Solution {
public:
    bool detectCapitalUse(string word) {
        bool first, second;
        if (word[0] >= 'A' && word[0] <= 'Z')
            first = 1;
        else
            first = 0;
        if (word.size() == 1)
            return true;
        
        if (word[1] >= 'A' && word[1] <= 'Z')
            second = 1;
        else
            second = 0;
        
        if (first == 0 && second == 1)
            return false;
        
        for (int i = 1; i < word.size(); i++)
            if (second) {
                if (word[i] >= 'a' && word[i] <= 'z')
                    return false;
            } else {
                if (word[i] >= 'A' && word[i] <= 'Z')
                    return false;
            }
        return true;
    }
};
