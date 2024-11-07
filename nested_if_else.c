#include <stdio.h>

int main() {
    int marks;

    
    printf("Enter your marks (out of 100): ");
    scanf("%d", &marks);

    
    if (marks >= 90) 
    {
        printf("The Grade obtained by the user is: A\n");
    } 
    else 
    {
        if (marks >= 75) 
        {
            printf("The Grade obtained by the user is: B\n");
        } 
        else 
        {
            if (marks >= 50) 
            {
                printf("The Grade obtained by the user is: C\n");
            } 
            else 
            {
                if (marks >= 35) 
                {
                    printf("The Grade obtained by the user is: D\n");
                } 
                else 
                {
                    printf("The Grade obtained by the user is: F (FAILED) \n"); 
                }
            }
        }
    }

    return 0;
}
