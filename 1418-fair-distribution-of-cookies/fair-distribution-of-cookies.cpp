class Solution {
public:
int result=INT_MAX;
    void solve(int idx,vector<int>&cookies,vector<int>&student,int k)
    {
        if(idx==cookies.size())
        {
            int fair=*max_element(student.begin(),student.end());
             result=min(fair,result);
             return;
        }
        for(int i=0;i<k;i++)
        {
            student[i]+=cookies[idx];
            solve(idx+1,cookies,student,k);
            student[i]-=cookies[idx];
        }
    }
    int distributeCookies(vector<int>& cookies, int k) {
    vector<int>child(k);
        solve(0,cookies,child,k);
        return result;
    }
};