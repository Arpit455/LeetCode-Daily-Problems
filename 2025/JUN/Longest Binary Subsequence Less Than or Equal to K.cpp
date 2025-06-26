class Solution {
public:
    int longestSubsequence(string s, int k) {

        int n=s.size();

        int maxSize=0;
        int pos=0;
        long long int num=0;

        for(int i=n-1;i>=0;i--)
        {
           if(s[i]=='0')
           {
            pos++;
            maxSize++;
           }
           else
           {
            if(pow(2,pos)+num<=k)
            {
                
                num+=pow(2,pos);
                pos++;
                maxSize++;
            }
           }
        }
        return maxSize;        
    }
};