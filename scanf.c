#include <stdio.h>

int main() 
{
    int a, b, c;

    printf("Enter a = ");
    scanf("%d", &a);

    printf("Enter b = ");
    scanf("%d", &b);

    c = a + b;
    
    printf("The addition of %d and %d is %d\n", a, b, c);

    return 0;
}