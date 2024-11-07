#include<stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);

    if(age<18)
    {
        printf("User is minor and is not fit for Working.\n");
    }
    else if(age>=18 && age<=60)
    {
        printf("User is eligible for Working.\n");
    }
    else
    {
        printf("User is ready for retirement.\n");
    }

    return 0;
}