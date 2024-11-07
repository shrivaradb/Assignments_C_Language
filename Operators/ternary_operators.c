#include <stdio.h>
int main()
{

    int a,b,max;

    printf("Enter a=");
    scanf("%d",&a);

    printf("Enter b=");
    scanf("%d",&b);

    max=a>b?a:b;
    printf("Greater number is= %d\n",max);

    return 0;
}