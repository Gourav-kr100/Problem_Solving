class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string>mp(wordList.begin(),wordList.end());
        if(mp.find(beginWord)==mp.end())
            mp.insert(beginWord);
         if(mp.find(endWord)==mp.end())
            return 0;
        queue<pair<string,int>>q;
        q.push({beginWord,1});
        mp.erase(beginWord);
        while(!q.empty())
        {
            pair p=q.front();
            string word=p.first;
            int val=p.second;
            q.pop();
            if(word==endWord)
                return val;
            for(int i=0;i<word.size();i++)
            {
                char orginal=word[i];
                for(char j='a';j<='z';j++)
                {
                    word[i]=j;
                    if(mp.find(word)!=mp.end())
                    {
                        q.push({word,val+1});
                        mp.erase(word);
                    }
                }
                word[i]=orginal;
            }
        }
        return 0;
    }
};