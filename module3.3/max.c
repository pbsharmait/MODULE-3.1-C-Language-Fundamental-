#include<stdio.h>
main()

{
      int a[10],i,max=0;
      
      printf("Enter 10 Value :");
      
      for(i=0;i<=10;i++)
          {
               scanf("%d",&a[i]);
          }
      for(i=0;i<=10;i++)
          {
              if(a[i]>max)
               {
                    max=a[i]; 
                   
               }
              
                   
           }
                    
                    printf("Maximum is : %d\n",max);
                
} 

