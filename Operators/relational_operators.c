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

   
    return 0;
}