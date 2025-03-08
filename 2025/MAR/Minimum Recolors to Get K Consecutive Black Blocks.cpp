class Solution {
public:
    int minimumRecolors(string blocks, int k) {

        int i=0,j=0,white=0;
        int minRecolor=INT_MAX;
        while(j<blocks.size())
        {

            if(blocks[j]=='W')
            white++;

          
            if(j-i+1>k)
            {
                if(blocks[i]=='W')
                white--;
                i++;
            }
            
             if(j-i+1==k)
            minRecolor=min(minRecolor,white);
            j++;
        }
        return minRecolor;
        
    }
};