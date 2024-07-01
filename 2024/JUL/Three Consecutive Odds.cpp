bool threeConsecutiveOdds(vector<int>& arr) {

    int n=arr.size();
    int i=0,j=0,count=0;
    while(j<n)
    {
       if(arr[j]%2!=0)
       count++;
       if(j-i>2)
       {
        if(arr[i]%2!=0)
        count--;
        i++;
       }
       if(count==3)
       return true;
       j++;

    }
    return false;
        
}