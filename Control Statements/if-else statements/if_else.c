#include<stdio.h>

int main()
{
    int age;

    printf("Enter age=");
    scanf("%d",&age);

    if(age>=18)
    {
        printf("Candidate is eligible to vote.");
    }
    else
    {
        printf("Candidate is not eligible to vote.");
    }

    return 0;


}