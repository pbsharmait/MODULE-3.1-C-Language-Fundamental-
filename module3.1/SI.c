#include<stdio.h>
main()
{
	float p,r,t,SI;
	 printf("Enter value of Amount : ",p);
	 scanf("%f",&p);
	 
	 printf("Enter value of Rate : ",r);
	 scanf("%f",&r);
	 
	 printf("Enter Duration of Time : ",t);
	 scanf("%f",&t);
	 
	 SI = (p*r*t)/100;
	 
	 printf("%f",SI);
	 
	 
}
