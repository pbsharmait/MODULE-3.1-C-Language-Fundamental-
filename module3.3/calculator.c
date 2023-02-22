#include<stdio.h>
main()
{
	int optn;
	float a,b,c;
	
	printf("\n1. Add : ");
	printf("\n2. Subtract : ");
	printf("\n3. Multiply : ");
	printf("\n4. Divide : ");
	printf("\n5. Exit : ");
	printf("\n1 What you want to do?: ");
	
	scanf("%d",&optn);
	
	switch(optn)
	
	do
	{
  		case 1:
		printf("\nEnter Numbers to Add: ");
		scanf("%f %f",&a,&b);
        c=a+b;
        
        printf("Addition's Result Is= %.3f",c);
  		break;
  		
  		case 2:
		printf("\nEnter Numbers to Subtract: ");
		scanf("%f %f",&a,&b);
        c=a-b;
        
        printf("Subtraction's Result Is= %.3f",c);
  		break;
  		
  		case 3:
		printf("\nEnter Numbers to Multiply: ");
		scanf("%f %f",&a,&b);
        c=a*b;
        
        printf("Multiplication's Result Is= %.3f",c);
  		break;
  		
  		case 4:
		printf("\nEnter Numbers to Divide: ");
		scanf("%f %f",&a,&b);
        c=a/b;
        
        printf("Dividion's Result Is= %.3f",c);
  		break;
  		
  		case 5:
		exit(0);
        default :printf("\n Invalid option...");
	}
	
	while(optn!=0);
}
