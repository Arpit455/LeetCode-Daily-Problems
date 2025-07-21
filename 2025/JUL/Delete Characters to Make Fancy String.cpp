class Solution {
public:
    string makeFancyString(string s) {
        string fancy="";
        fancy+=s[0];
        int prev=0;
        for(int i=1;i<s.size()-1;i++)
        {
           if(s[i]!=s[prev] || s[i]!=s[i+1])
           {
             prev=i;
             fancy+=s[i];
           }
        }
        if(s.size()>1)
        fancy+=s[s.size()-1];

        return fancy;
        
    }
};