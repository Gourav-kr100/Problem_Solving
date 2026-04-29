class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans='0';
        char res='0';
        for(int i=0;i<s.size();i++)
            ans=ans^s[i];
        for(int i=0;i<t.size();i++)
            res=res^t[i];
        return ans^res;
    }
};