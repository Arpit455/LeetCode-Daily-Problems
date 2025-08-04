class Solution {
public:
    int totalFruit(vector<int>& fruits) {

        unordered_map<int,int>freq;
        int left=0,right=0;
        int maxfruits=0,tempfruits=0;
        while(right<fruits.size())
        {
            if(freq.find(fruits[right])==freq.end() && freq.size()==2)
            {
                int count=0;
                while(freq.size()!=1)
                {
                    count++;
                    freq[fruits[left]]--;
                    if(freq[fruits[left]]==0)
                    freq.erase(fruits[left]);
                    left++;
                }
                tempfruits-=count;
            }

            freq[fruits[right]]++;
            tempfruits++;
            maxfruits=max(maxfruits,tempfruits);
            right++;
        }

        return maxfruits;
        
    }
};