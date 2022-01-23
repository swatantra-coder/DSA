void swap(int* x,int* y)
    {
        int temp=*x;
        *x=*y;
        *y=temp;
    }    
int shouldPunish (int roll[])
    {
       
       int count=0,sum=0;
       for(int i=0;i<n-1;i++)
       {
           for(int j=0;j<n-i-1;j++)
           {
               if(roll[j]>roll[j+1])
               {
                   swap(&roll[j], &roll[j+1]);
                   count++;
               }
           }
       }
        return 0;
    }
