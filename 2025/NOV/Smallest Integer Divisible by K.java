class Solution {
    public int smallestRepunitDivByK(int k) {

        int n=0,length=0;
        HashSet<Integer> st= new HashSet<>();
        while(true)
        {
            n = n*10 +1;
            length++;

            if(n%k==0)
            return length;

            n=n%k;          
            if(st.contains(n))
            return -1;
            st.add(n);
        }
        
    }
}