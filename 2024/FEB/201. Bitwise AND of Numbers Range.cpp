int rangeBitwiseAnd(int left, int right) {

        // int result =-1;
        // long int i=left,j=right;
        // while(i<=j)
        // {
        //     if(result==0)
        //     return 0;
        //     if(result==-1)
        //     result=i++&j--;
        //     else
        //     result=result &i++ &j--;
        // }
        // return result;

        int shift=0,i=left,j=right;
       while(i<j){
           i>>=1;  //l left
           j>>=1;  //r right
           shift++;
       }
       return i<<shift;



    }