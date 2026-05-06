class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        sort(spaces.begin(), spaces.end());

        string res;
        res.reserve(s.size() + spaces.size());

        int j = 0;
        for (int i = 0; i < s.size(); i++) {
            if (j < spaces.size() && spaces[j] == i) {
                res += ' ';
                j++;
            }
            res += s[i];
        }
        return res;
    }
};