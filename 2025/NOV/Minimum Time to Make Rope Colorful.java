class Solution {
    public int minCost(String colors, int[] neededTime) {

        int prev=0;
        int timeNeeded=0;

        for(int i=1;i<colors.length();i++)
        {
            if(colors.charAt(i)==colors.charAt(prev))
            {
                 if(neededTime[prev]<=neededTime[i])
                 {
                    timeNeeded+=neededTime[prev];
                    prev=i;
                 }
                 else
                 {
                    timeNeeded+=neededTime[i];
                 }

            }
            else
            {
               prev=i;
            }
        }
        return timeNeeded;
        
    }
}