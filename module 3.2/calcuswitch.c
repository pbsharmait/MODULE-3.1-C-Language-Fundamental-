#include<stdio.h>
main()
{
	char op;
	float x,y;
	
	printf("Enter an Operatore : ");
	scanf("%c", &op);
	
	 printf("ENTER VALUE OF x :");
	scanf("%f",&x);
	
	printf("ENTER VALUE OF y :");
	scanf("%f",&y);
	
	switch(op)
	{
		case '+':
			printf("%.3f + %.3f = %.3f",x,y,x+y);
			break;
			
			case '-':
				printf("%.3f - %.3f = %.3f",x,y,x-y);
				break;
				
				case '*':
				printf("%.3f * %.3f = %.3f",x,y,x*y);
				break;
				
				case '/':
				printf("%.3f / %.3f = %.3f",x,y,x/y);
				break;
				
				default :
					printf("Error! operator is not correct\n Enter correct operator");
					
					
	}
}
