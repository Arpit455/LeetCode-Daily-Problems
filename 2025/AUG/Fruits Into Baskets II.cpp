class Solution {
public:
    int numOfUnplacedFruits(vector<int>& fruits, vector<int>& baskets) {

        int unplaced_fruits=0;

        for(auto i:fruits)
        {
            bool placed=false;
            for(int j=0;j<baskets.size();j++)
            {
                if(baskets[j]>=i)
                {
                    baskets[j]=0;
                    placed=true;
                    break;
                }
            }
             if(!placed)
            unplaced_fruits++;
        }

        return unplaced_fruits;
        
    }
};