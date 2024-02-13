string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            int j=0,k=words[i].length()-1;
            bool palindrome=true;
            while(j<=k)
            {
              if(words[i][j]!=words[i][k])
              {
                  palindrome=false;
                  break;
              }

              j++;
              k--;
            }
            if(palindrome)
            {
                return words[i];
            }
        }

        return "";
        
    }