#include <stdio.h>

int main() {
    int a,i,fact;
    fact=1;
    
    printf("Enter a number = ");
    scanf("%d", &a);
    
    for(i=1;i<=a;i++)

    fact*=i;
    {
        printf("Factorial of %d is %d",a,fact);
    }
  
 
    return 0;
}