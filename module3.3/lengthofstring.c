#include<stdio.h>
#include<string.h>
main()
{
    char str[50];
    int i,l=0;

    printf("Input a string : ");
    gets(str);
 
    for(i=0;str[i]!='\0';i++)
    {
        l++;
    }
    printf("The string contains %d  number of characters. \n",l);
    printf("So, the length of the string %s is : %d\n\n", str, l);
}
