class Solution {
public:
    int maxDifference(string s) {

        vector<int>freq(26,0);

        for(auto i:s)
        {
            freq[i-'a']++;
        }

        sort(freq.begin(),freq.end());

        int oddfreq,evenfreq;

        int i=25;
        while(i>=0)
        {
            if(freq[i]&1)
            {
                oddfreq=freq[i];
                break;
            }
            i--;
        }
        i=0;
        while(i<26)
        {
            if(freq[i]%2==0 &&freq[i]!=0)
            {
                evenfreq=freq[i];
                break;
            }
            i++; 
        }

        return oddfreq-evenfreq;
        
    }
};