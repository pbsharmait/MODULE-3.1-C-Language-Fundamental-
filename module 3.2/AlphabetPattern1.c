#include<stdio.h>

main()
{
    int i,j,k=1;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++,k++)
        {
            printf("%2c",(char)(k+64));   
        }
        printf("\n");
    }
}
