class Solution {
public:
    string simplifyPath(string path) {
        string token="";
        stringstream ss(path);
        vector<string>ans;
        string result="";
        while(getline(ss,token,'/'))
        {
            if(token=="" || token==".")
                continue;
            else if(token!="..")
                ans.push_back(token);
            else if(!ans.empty())
                ans.pop_back();
        }
        if(ans.empty())
            return "/";
        for(auto &it : ans)
            result+="/"+it;

        return result;
    }
};