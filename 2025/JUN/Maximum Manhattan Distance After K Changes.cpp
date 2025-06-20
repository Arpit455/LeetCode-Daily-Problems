class Solution {
public:
    int maxDistance(string s, int k) {

        int n=s.size();

        int north=0,south=0,east=0,west=0;
        int maxDistance=0;

        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='N')
            north++;
            else if(s[i]=='S')
            south++;
            else if(s[i]=='E')
            east++;
            else
            west++;

            maxDistance=max(maxDistance,min(i+1,abs(north-south)+abs(east-west)+2*k));

        }

        return maxDistance;

        
    }
};