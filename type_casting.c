#include<stdio.h>

int main()
{
    int a,b,c;
    a=10;
    b=40;

    c=a+b;//Here the output is in the form of an Integer.
    printf("The value of c is: %d\n",c);

    float d;
    d=(float)a+b;//Here the output is in the form of an Float value.
    printf("The value of d is: %f\n",d);


    return 0;
}