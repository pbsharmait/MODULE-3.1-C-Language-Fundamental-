#include<stdio.h>

int  factorial(int n);
main()
{
    int n;
    printf("Enter a Number: ");
    scanf("%d",&n);
    printf("Factorial of %d = %ld", n, factorial(n));
    return 0;
}

int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}
