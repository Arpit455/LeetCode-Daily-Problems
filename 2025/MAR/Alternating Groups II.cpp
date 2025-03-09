class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors, int k) {

        int start=0,end=1;
        int count=0;
        int n=colors.size();

        while(start<n)
        {
           if(colors[end%n]==colors[(end-1)%n])
           {
             start=end;
           }
           if(end-start+1==k)
           {
            count++;
            start++;
           }

           end++;

        }

        return count;
        
    }
};