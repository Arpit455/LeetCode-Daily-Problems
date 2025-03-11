class Solution {
public:
    int numberOfSubstrings(string s) {

        int i=0,j=0;
        int substrings=0;
        unordered_map<char,int>frequency;

        while(j<s.size())
        {
            frequency[s[j]]++;
            while(frequency.size()==3)
            {
                substrings+=s.size()-j;
                if(--frequency[s[i]]==0)
                frequency.erase(s[i]);
                i++;
            }
            j++;
        }
        return substrings;
        
    }
};