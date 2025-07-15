class Solution {
public:
    bool isValid(string word) {

        if(word.size()<3)
        return false;

        int vowel=0,consonent=0;

        vector<char>vowels={'a','e','i','o','u','A','E','I','O','U'};

        for(auto i:word)
        {
            if((i<'0' || i>'9') && (i<'a' || i>'z') && (i<'A' || i>'Z'))
            return false;

            if(i>='0' && i<='9')
            continue;

            bool c=true;

            for(auto j:vowels)
            {
              if(i==j)
              {
              vowel++;
              c=false;
              break;
              }
            }

            if(c)
            consonent++;
        }

        if(vowel<1 || consonent<1)
        return false;

        return true;
        
    }
};