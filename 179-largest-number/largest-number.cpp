class Solution {
public:
    string largestNumber(vector<int>& nums) {
        auto comp=[](int &a,int &b)
        {
            string s1=to_string(a);
            string s2=to_string(b);
            if(s1+s2>s2+s1)
                return true;
            return false;
        };
        sort(nums.begin(),nums.end(),comp);
        if(nums[0]==0)
            return "0";
            string res="";
       for(int i=0;i<nums.size();i++)
       {
        res+=to_string(nums[i]);
       }
        return res;
    }
};