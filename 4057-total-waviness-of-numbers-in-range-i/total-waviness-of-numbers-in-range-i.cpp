class Solution {
public:
    int cal(int num)
    {
        string s=to_string(num);
        int len=s.length();
        int score=0;
        if(len<3)
            return 0;
        for(int i=1;i<=len-2;i++)
        {
                if(s[i]>s[i+1] && s[i]>s[i-1])
                    score++;
                if(s[i]<s[i+1] && s[i]<s[i-1])
                    score++;
        }
        return score;
    }
    int totalWaviness(int num1, int num2) {
        int wave=0;
        for(int i=num1;i<=num2;i++)
            wave+=cal(i);
            return wave;
    }
};