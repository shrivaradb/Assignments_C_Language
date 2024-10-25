#include <stdio.h>

int main() {
    int a,b,c,d,e,f,g;
    a=33;
    b=20;
    // We get the output of the below code in BOOLEAN VALUE.
    c=a>b;
    printf("a > b: %d\n", a > b);
    d=a<b;
    printf("a < b: %d\n", a < b);
    e=a>=b;
    printf("a >= b: %d\n", a >= b);
    f=a<=b;
    printf("a <= b: %d\n", a <= b);
    g=a==b;
    printf("a == b: %d\n", a == b);

    // if else is used to get the output.

     if (a > b)
        printf("a is greater than b\n");
    else
        printf("b is greater than a\n");

         if (a < b)
        printf("a is less than b\n");
    else
        printf("a is greater than b\n");

         if (a >= b)
        printf("a is greater than or equal to b\n");
    else
        printf("a is less than b\n");

         if (a <= b)
        printf("a is lesser than or equal to b\n");
    else
        printf("a is greater than b\n");
        
         if (a == b)
        printf("a is equal to b\n");
    else
        printf("a is not equal b\n");
        
       
    return 0;
}