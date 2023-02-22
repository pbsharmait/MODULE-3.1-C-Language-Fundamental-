#include <stdio.h>
#include <string.h>
  
main()
{
   char str[100], revstr[100];
 
   printf("Enter the string\n");
   scanf("%s",str);
    
 
   strcpy(revstr,str);
   
   strrev(revstr);
    
   if(strcmp(str,revstr) == 0 )
      printf("%s is a palindrome.\n",revstr);
   else
      printf("%s is not a palindrome.\n",str);
       
   
}
