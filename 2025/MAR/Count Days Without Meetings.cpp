class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {

        sort(meetings.begin(),meetings.end());

        int meetingDays=meetings[0][1]-meetings[0][0]+1;
        int prev=0;

        for(int i=1;i<meetings.size();i++)
        {
           if(meetings[i][0]>meetings[prev][1])
           {
             meetingDays+=meetings[i][1]-meetings[i][0]+1;
             prev=i;
           }
            
           else if(meetings[i][1]>meetings[prev][1])
           {
           meetingDays+=meetings[i][1]-meetings[prev][1];
           prev=i;
           }
        }

        return days-meetingDays;

        
    }
};