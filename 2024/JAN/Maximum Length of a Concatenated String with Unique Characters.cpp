 bool isPossible(string s1,set<char>&s)
    {
        bool possible=true;
        int count=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s.find(s1[i])!=s.end())
            {
                possible =false;
                break;
            }
            s.insert(s1[i]);
            count++;
        }
        if(!possible)
        {
            for(int i=0;i<count;i++)
            {
                s.erase(s1[i]);
            }
            return false;
        }
        return true;
    }
    int maxxlength(vector<string> & arr,set<char>&s,int i)
    {
        if(i>=arr.size())
        return 0;
        if(isPossible(arr[i],s))
        {
            int a=arr[i].length()+maxxlength(arr,s,i+1);
            for(int j=0;j<arr[i].length();j++)
            {
                s.erase(arr[i][j]);
            }
            int b=maxxlength(arr,s,i+1);
            return max(a,b);
        }
        else
        return maxxlength(arr,s,i+1);
    }
    int maxLength(vector<string>& arr) {
        if(arr.size()==0)
        return 0;
        set<char>s;
        int ans=maxxlength(arr,s,0);
        return ans;
        
    }