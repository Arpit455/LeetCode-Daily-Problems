class Solution {
    public List<Boolean> prefixesDivBy5(int[] nums) {
      
       int n=nums.length;
       List<Boolean> ans = new ArrayList<Boolean>();

        int temp=0;

        for(int i=0;i<n;i++)
        {
            temp =temp<<1;
            temp+=nums[i];
            temp%=5;
            ans.add(temp%5==0);
        }

        return ans;
        
        
    }
}