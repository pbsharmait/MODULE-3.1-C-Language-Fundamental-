
#include<stdio.h>
main()
{
	int i,n,rev=0,rem;
	
	printf("Enter any Number : ");
	scanf("%d",&n);
	
	for(i=0;n!=0;i++)
	{
		rem=n%10;
		rev=rev*10+rem;
		n/=10;
		
	}
	
	
	printf("Reverse number is %d:",rev);
	
}
