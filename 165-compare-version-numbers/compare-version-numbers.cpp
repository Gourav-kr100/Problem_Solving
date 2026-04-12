class Solution {
public:
    vector<string> gettokens(string s)
    {
        vector<string>ans;
        string token="";
        stringstream ss(s);
        while(getline(ss,token,'.'))
        {
            ans.push_back(token);
        }
        return ans;
    }
    int compareVersion(string version1, string version2) {
        vector<string>v1;
        vector<string>v2;
        v1=gettokens(version1);
        v2=gettokens(version2);
        int m=v1.size();
        int n=v2.size();
        int i=0;
        while(i<m || i<n)
        {
            int a=i < m ? stoi(v1[i]) : 0;
            int b=i < n ? stoi(v2[i]) : 0;
            if(a<b)
                return -1;
            else if(a>b)
                return 1;
            else 
            i++;
        }
        return 0;
    }
};