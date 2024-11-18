#include <stdio.h>

int main() {
    int a,i,j,k;

    printf("Enter number of rows = ");
    scanf("%d", &a);
    
    for(i=1;i<=a;i++)
    {
        for(j=1;j<=i;j++)
        
        {
        printf(" ");

    }
    for (k = 1; k <=a-i; k++) {
            printf("* ");
        }
    printf("\n");

    }
    
  
 
    return 0;
}  