 int bagOfTokensScore(vector<int>& tokens, int power) {
        int max_score=0,score=0;
        sort(tokens.begin(),tokens.end());
        int i=0,j=tokens.size()-1;
        while(i<=j)
        {
            if(power>=tokens[i])
            {
                power-=tokens[i];
                score++;
                i++;
            }
            else
            {
              if(max_score>=1)
              {
                  power+=tokens[j];
                  j--;
                  score--;
              }
              else
              return max_score;
            }
            max_score=max(score,max_score);
        }
        return max_score;
        
    }