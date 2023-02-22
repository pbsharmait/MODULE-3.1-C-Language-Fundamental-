#include<stdio.h>
main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{
		printf("Enter array element : ");
        scanf("%d",&a[i]);
	}
	
	printf("Even numbers in the array are: ");
     for(i=0;i<10;i++)	
	{
	   if(a[i]%2==0)
            printf(" %d ",a[i]);
	}
	printf("\nOdd numbers in the array are: ");
	for(i=0;i<10;i++)
    {
        if(a[i]%2==1)
            printf(" %d ", a[i]);
    }
}
