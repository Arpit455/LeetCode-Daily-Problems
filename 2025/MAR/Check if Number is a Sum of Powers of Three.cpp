class Solution {
public:
bool helper(int num,int target)
{
    if(target==0)
    return true;

    if(target-pow(3,num)>=0)
        return helper(num+1,target) || helper(num+1,target-pow(3,num));
    else
    return false;

}
    bool checkPowersOfThree(int n) {
        return helper(0,n);  
    }
};