#include<stdio.h>
int main()
{
    int a,b,c,d,e,f;
    
    //Logical AND Operator ( && )
    a=55;
    b=66;

    if(a<0 && b<0)
    {
        printf("Both a and b are less than 0\n");
    
    }
    else{
        printf("Both a and b are greater than 0\n");
    }

    //Logical OR Operator ( || )
    c= -1;
    d= -1;

    if(c>0 || d>0)
    {
        printf("Any one value from c and d is greater than zero\n");
    }
    else
    {
        printf("Both the values c and d are less than zero\n");
    }

    //Logical NOT Operator ( ! )
    e=16;
    f=16;

    if(!(e==f))
    //condition is true but it will return as false.
    {
        printf("Both e and f are equal");
    }
    else
    {
        printf("They are not equal");
    }



    return 0;
}