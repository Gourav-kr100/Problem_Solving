class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0,j=0;
        int n=s.size();
        int count=0;
        vector<int>freq(3);
        while(j<n)
        {
            freq[s[j]-'a']++;
            while(freq[0]>0 && freq[1]>0 && freq[2]>0)
            {
                freq[s[i]-'a']--;
                count+=n-j;
                i++;
            }
            j++;
        }
        return count;
    }
};