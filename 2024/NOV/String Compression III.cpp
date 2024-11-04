string compressedString(string word) {

        string ans="";
        int i=0;
        while(i<word.length())
        {
            int count=1;
            i++;
            while(i<word.length() && word[i]==word[i-1] && count<9)
            {
                count++;
                i++;
            }
            ans+=to_string(count);
            ans+=word[i-1];

        }
        return ans;
        
    }