#include <stdio.h>
void revstring();
main() 
{
    printf("Enter a sentence: ");
    revstring();
    
}

void revstring()
{
    char c;
    scanf("%c", &c);
    
	if (c != '\n')
	 {
        revstring();
        printf("%c", c);
    }
}
