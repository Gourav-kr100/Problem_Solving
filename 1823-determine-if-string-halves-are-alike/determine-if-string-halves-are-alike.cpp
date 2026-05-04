class Solution {
public:
    bool halvesAreAlike(string s) {
        int n=s.size()/2;
        int m=s.size();
        int i=0,cl=0,cr=0;
        while(i<n)
        {
            if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                cl++;
                i++;
        }
        while(i<m)
        {
            
            if(s[i]=='A' || s[i]=='E' || s[i]=='O' || s[i]=='I' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='o' || s[i]=='i' || s[i]=='u')
                cr++;
                i++;
        }
        return cl==cr;
    }
};