int minimizeXor(int num1, int num2) {
        int setbits=0;
        while(num2)
        {
            if(num2&1)
            setbits++;
            num2=num2>>1;
        }
        vector<int>bits(32,0);
        int i=31 , setbits1=0,nums1=num1;
        while(nums1)
        {
          bits[i]=nums1&1;
          if(bits[i]==1)
          setbits1++;
          i--;
          nums1/=2;

        }
        if(setbits==setbits1)
        return num1;
        else if(setbits>setbits1)
        {
            int count=setbits-setbits1;
            for(int i=31;i>=0;i--)
            {
                if(count==0)
                break;
                if(bits[i]==0)
                {
                    bits[i]=1;
                    count--;
                }
            }
        }
        else
        {
            int count=setbits;
            for(int i=0;i<32;i++)
            {
                if(count==0)
                bits[i]=0;
                else if(bits[i]==1)
                count--;
            }
        }
        int power=0,num=0;
        for(int i=31;i>=0;i--)
        {
            num+=bits[i]*pow(2,power);
            power++;
        }
        return num;

        
    }