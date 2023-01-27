class Solution {
public:
    unordered_set<string>mpp;
    bool isconcat(string word)
    {
        int len=word.length();
        for(int i=1;i<len;i++)
        {
            string suffix=word.substr(i);
            if(mpp.find(word.substr(0,i))!=mpp.end() && (mpp.find(suffix)!=mpp.end() || isconcat(suffix)))
                return true;
        }
        return false;
    }
    vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
        vector<string>res;
        if(words.size()==0)
            return res;
        for(string word:words)
        {
            mpp.insert(word);
        }
        for(string word:words)
        {
            if(isconcat(word))
                res.push_back(word);
        }
      return res;  
        
    }
};