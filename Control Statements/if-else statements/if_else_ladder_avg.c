#include <stdio.h>

int main()
{
    int a,b,c,d,e;

    printf("Enter your marks you scored in Mathematical Foundation: ");
    scanf("%d", &a);
    printf("Enter your marks you scored in Engineering Physics: ");
    scanf("%d", &b);
    printf("Enter your marks you scored in Basic of Electronics: ");
    scanf("%d", &c);
    printf("Enter your marks you scored in Fundamentals of Programming Language: ");
    scanf("%d", &d);
    printf("Enter your marks you scored in Professional Communication Skills: ");
    scanf("%d", &e);

    int total;
    total=a+b+c+d+e;

    float avg;
    avg=(total / 125.0)*100;

    printf("\n\nThe total of the marks you scored is %d and the average is %f\n", total, avg);


    if(avg>=91 && avg<=100)
    {
        printf("\nThe grade obtained by the user is 'A'.\n");
    }

    else if(avg>=81 && avg<=90)
    {
        printf("\nThe grade obtained by the user is 'B'.\n");
    }

    else if(avg>=71 && avg<=80)
    {
        printf("\nThe grade obtained by the user is 'C'.\n");
    }

    else if(avg>=61 && avg<=70)
    {
        printf("\nThe grade obtained by the user is 'D'.\n");
    }

    else if(avg>=51 && avg<=60)
    {
        printf("\nThe grade obtained by the user is 'E'.\n");
    }

    else
    {
        printf("\nThe user has 'Failed'.\n");
    }
    
    return 0;
}
