#include<stdio.h>

int main()
{
    int worldcup;

    
    printf("Who has won the most world cups in the history of cricket?\n");
    printf("1) India\n");
    printf("2) Pakistan\n");
    printf("3) Australia\n");
    printf("4) New Zealand\n");

    
    printf("Enter your choice (1-4): ");
    scanf("%d", &worldcup);

    
    switch(worldcup)
    {
        case 1:
            printf("The option is incorrect.\n");
            break;
        case 2:
            printf("The option is incorrect.\n");
            break;
        case 3:
            printf("The option is correct\n");
            break;
        case 4:
            printf("The option is incorrect\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
            break;
    }

    return 0;
}