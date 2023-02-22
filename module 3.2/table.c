#include<stdio.h>
main()
{
	int i,number,upto;
	 printf("Enter any Number to print table : ");
	 scanf("%d",&number);
	 printf("Up to enter any number : ");
	 scanf("%d",&upto);
	 
	 
	 for(i=1;i<=upto;i++)
{
	printf("%d*%d=%d\n",number,i,(number*i));
	
	
	 }	 
	 
	
}
