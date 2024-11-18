#include <stdio.h>

int main()
{
    int a,i,j;

    printf("Enter the number of rows: ");
    scanf("%d", &a);

   
    for (i=0;i<a;i++) 
    {

        
        for (j=0;j<2*i;j++) 
        {
            printf(" ");
        }


        for (int k=0;k<a-i;k++) 
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
