#include <stdio.h>
main()
{
    int a[10],i,oddSum=0,evenSum=0;
    
    printf("Enter array element : ");
    
    for(i=0; i<10; i++)
	{
		scanf("%d",&a[i]);
		
        if(a[i]%2==0)
		{
        evenSum=evenSum+a[i];
        }
    else{
             oddSum=oddSum+a[i];
        }
    }
    printf("The sum of odd numbers are: %d",oddSum);
    printf("\nThe sum of even numbers are: %d",evenSum);
    
    
}
