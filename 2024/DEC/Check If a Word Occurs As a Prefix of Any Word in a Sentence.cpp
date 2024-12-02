bool prefix(string s1 ,string s2)
    {
        int i=0,j=0;
        while(j<s2.size())
        {
            if(s1[i]!=s2[j])
            return false;
            i++;
            j++;
        }
        return true;
    }
    int isPrefixOfWord(string sentence, string searchWord) {

        string temp="";
        int count =1;
        for(int i=0;i<sentence.size();i++)
        {
            if(sentence[i] ==' ')
            {
                if(temp.size()>=searchWord.size() && prefix(temp,searchWord))
                return count;

                count++;
                temp="";            
            }
            else
            temp+=sentence[i];
        }
        if(temp.size()>=searchWord.size() && prefix(temp,searchWord))
        return count;
        return -1;
        

    }