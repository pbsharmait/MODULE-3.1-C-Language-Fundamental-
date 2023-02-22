#include<stdio.h>
main()
{
	int n,firstdigit,lastdigit,sum=0;
	
	printf("Enter any Number : ");
	scanf("%d",&n);
	
	lastdigit = n%10;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstdigit=n;
	 
	sum= firstdigit + lastdigit;
	 
	printf("sum of First and Last digit is = %d",sum);
	
	
	
}
