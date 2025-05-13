class Solution {
public:
    int lengthAfterTransformations(string s, int t) {

        vector<long long> counts(26, 0);
        int mod=1e9+7;


    for (char ch : s) {
        counts[ch - 'a']++;
    }


    for (int step = 0; step < t; ++step) {
        vector<long long> newCounts(26, 0);
        for (int i = 0; i < 26; ++i) {
            if (i == 25) { 
                newCounts[0] += counts[i]%mod; 
                newCounts[1] += counts[i]%mod; 
            } else {
                newCounts[i + 1] += counts[i]%mod;
            }
        }
        counts = newCounts;
    }

    long long totalLength = 0;
    for (long long count : counts) {
        totalLength += count;
        totalLength%=mod;
    }
        
return totalLength;
    }
};