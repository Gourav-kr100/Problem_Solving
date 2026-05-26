class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char>st;
        int count=0;
        for(int i=0;i<word.size();i++)
            st.insert(word[i]);
        for(int i=0;i<word.size();i++)
        {
            char ch=word[i];
            if(isupper(ch) && st.find(tolower(ch))!=st.end())
            {
                st.erase(ch);
                st.erase(tolower(ch));
                count++;
            }
            if(islower(ch) && st.find(toupper(ch))!=st.end())
            {
                 st.erase(ch);
                st.erase(toupper(ch));
                count++;
            }
        }
        return count;
    }
};