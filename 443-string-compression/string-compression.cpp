class Solution {
public:
    int compress(vector<char>& chars) {
        char ch;
        int idx=0;
        int count=0;
        int i=0;
        while(i<chars.size())
        {
            ch=chars[i];
            count=0;
            while(i<chars.size() && chars[i]==ch)
            {
                count++;
                i++;
            }
            chars[idx]=ch;
            idx++;
            if(count>1){
            string count1=to_string(count);
            for(int j=0;j<count1.size();j++)
            {
                    chars[idx]=count1[j];
                    idx++;
            }
            }
        }
        return idx;
    }
};