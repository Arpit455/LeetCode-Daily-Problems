
int minimumLength(string s) {
        int i=0,j=s.size()-1;
        while(i<j)
        {
          if(s[i]!=s[j])
          {
              return j-i+1;
          }
          i++;
          j--;
          while(s[i]==s[i-1] && i<j)
          {
              if(i==j-1)
              return 0;
              i++;
          }
          while(s[j]==s[j+1] && j>i)
          j--;
        }

        return i-j<0?0:j-i+1;;
        
    }