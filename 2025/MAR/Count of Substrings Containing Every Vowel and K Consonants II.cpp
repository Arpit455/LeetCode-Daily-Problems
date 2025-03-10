class Solution {
public:
    bool vowelCheck(unordered_map<char,int>&frequency)
    {
        for(auto i:frequency)
        {
            if(i.second<1)
            return false;
        }
        return true;
    }
    long long helper( string word ,int k ,unordered_map<char,int>&frequency)
    {
        int i=0,j=0,nonVowels=0;
        long long substrings=0;
        while(j<word.size())
        {
           if(frequency.find(word[j])!=frequency.end())
            frequency[word[j]]++;
            else
            nonVowels++;

           while(vowelCheck(frequency) && nonVowels>=k )
           {
               substrings+=word.size()-j;

               if(frequency.find(word[i])!=frequency.end())
               frequency[word[i]]--;
               else
                nonVowels--;
             i++;
               
           }
           j++;
        }
        return substrings;
    }
    long long countOfSubstrings(string word, int k) {

        unordered_map<char,int>frequency1,frequency2;;
        frequency1['a']=0;
        frequency1['e']=0;
        frequency1['i']=0;
        frequency1['o']=0;
        frequency1['u']=0;

        frequency2['a']=0;
        frequency2['e']=0;
        frequency2['i']=0;
        frequency2['o']=0;
        frequency2['u']=0;

        return helper(word,k,frequency1)-helper(word,k+1,frequency2);


        
    }
};