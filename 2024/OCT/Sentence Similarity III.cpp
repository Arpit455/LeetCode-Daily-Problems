bool areSentencesSimilar(string sentence1, string sentence2) {
        if(sentence1.length()>sentence2.length())
        swap(sentence1,sentence2);
        vector<string>s1,s2;
        int i=0 ;
        string temp="";
        while(i<sentence1.size())
        {
           if(sentence1[i]==' ')
           {
            s1.push_back(temp);
            temp="";
           }
           else
           temp+=sentence1[i];
           i++;
        }
        s1.push_back(temp);
        i=0;
        temp="";
        while(i<sentence2.size())
        {
           if(sentence2[i]==' ')
           {
            s2.push_back(temp);
            temp="";
           }
           else
           temp+=sentence2[i];
           i++;
        }
        s2.push_back(temp);

        int l1=0,l2=0,r1=s1.size()-1,r2=s2.size()-1;
        while(l1<s1.size() && l2<s2.size())
        {
            if(s1[l1]==s2[l2])
            {
                l1++;
                l2++;
            }
            else
            break;
        }
        while(r1>=0 && r2>=0)
        {
            if(s1[r1]==s2[r2])
            {
                r1--;
                r2--;
            }
            else
            break;
        }
        return r1<l1;

        

        
    }