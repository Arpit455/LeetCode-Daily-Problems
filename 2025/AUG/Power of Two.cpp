class Solution {
public:
    bool isPowerOfTwo(int n) {

        if(n<=0)
        return false;

        int x=ceil((double)log2(n));

        return pow(2,x)==n;
        
    }
};